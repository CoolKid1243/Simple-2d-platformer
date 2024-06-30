#include <SFML/Graphics.hpp>
#include "Grass.h"
#include <iostream>

Grass::Grass() :
    grass(sf::Vector2f(25, 25)),
    posX(0.f),
    posY(0.f) {

    grass.setPosition(posX, posY);

    std::string imagePath = "D:/All Game Stuff And Softwhere/VS Games/Simple 2d platformer/Simple 2d platformer v1/Renderer/Textures/Grass.png";

    if (!texture.loadFromFile(imagePath)) {
        std::cerr << "Error loading grass texture" << std::endl;
    }
    else {
        texture.setRepeated(true);
        grass.setTexture(&texture);
        grass.setTextureRect(sf::IntRect(0, 0, 25, 25)); // Texture scale
    }
}

void Grass::update(float deltaTime) {
    grass.setPosition(posX, posY);
}

void Grass::draw(sf::RenderWindow& window) {
    window.draw(grass);
}

void Grass::draw(sf::RenderWindow& window, float x, float y) {
    grass.setPosition(x, y);
    window.draw(grass);
}

sf::FloatRect Grass::getBounds() const {
    return grass.getGlobalBounds();
}
