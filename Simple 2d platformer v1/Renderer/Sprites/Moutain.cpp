#include "Mountain.h"
#include <iostream>

Mountain::Mountain() :
    mountain(sf::Vector2f(800, 600)),
    posX(0.f),
    posY(0.f) {

    mountain.setPosition(posX, posY);

    std::string imagePath = "D:/All Game Stuff And Softwhere/VS Games/Simple 2d platformer/Simple 2d platformer v1/Renderer/Textures/Hills.png";

    if (!texture.loadFromFile(imagePath)) {
        std::cerr << "Error loading mountain texture" << std::endl;
    }
    else {
        texture.setRepeated(true);
        mountain.setTexture(&texture);
        mountain.setTextureRect(sf::IntRect(0, 0, 800, 600));
    }
}

void Mountain::update(float deltaTime) {
}

void Mountain::draw(sf::RenderWindow& window) {
    window.draw(mountain);
}

void Mountain::draw(sf::RenderWindow& window, float x, float y) {
    mountain.setPosition(x, y);
    window.draw(mountain);
}

void Mountain::setPosition(float x, float y) {
    posX = x;
    posY = y;
    mountain.setPosition(posX, posY);
}
