#include <SFML/Graphics.hpp>
#include <iostream>

// Game objects
#include "Grass.h"
#include "Dirt.h"
#include "Tree_1.h"
#include "Tree_2.h"
#include "Mountain.h"
#include "movement.h"
#include "camera.h"

Grass grass;
Dirt dirt;
Tree_1 tree_1;
Tree_2 tree_2;
Mountain mountain;
Movement player;
Camera camera(800, 600);

void Update(float deltaTime) {
    grass.update(deltaTime);
    dirt.update(deltaTime);
    tree_1.update(deltaTime);
    tree_2.update(deltaTime);
    mountain.update(deltaTime);
    player.update(deltaTime);
    camera.update(player.getPosition(), deltaTime);
}

void Draw(sf::RenderWindow& window) {
    window.clear();
    camera.applyTo(window);

    float parallaxFactor = 0.7f;
    float mountainX = camera.getPosition().x * parallaxFactor;
    float mountainY = camera.getPosition().y * parallaxFactor;
    mountain.setPosition(mountainX, mountainY);
    mountain.draw(window);

    for (float y = 525.f; y <= 575.f; y += 25.f) {
        for (float x = 100.f; x <= 700.f; x += 25.f) {
            dirt.draw(window, x, y);
        }
    }

    for (float x = 100.f; x <= 700.f; x += 25.f) {
        grass.draw(window, x, 500.f);
    }

    tree_1.draw(window, 400.f, 435.f);
    tree_1.draw(window, 524.f, 435.f);
    tree_1.draw(window, 150.f, 435.f);

    player.draw(window);

    tree_2.draw(window, 325.f, 435.f);
    tree_2.draw(window, 225.f, 435.f);
    tree_2.draw(window, 447.f, 435.f);

    window.display();
}

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Simple 2D Platformer");

    sf::Clock clock;

    camera.setZoom(0.4f);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        float deltaTime = clock.restart().asSeconds();
        Update(deltaTime);
        Draw(window);
    }

    return 0;
}