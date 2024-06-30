#include <SFML/Graphics.hpp>
#include "BillyFront.h"
#include <iostream>

BillyFront::BillyFront() :
    billyFront(sf::Vector2f(32, 32)),
    posX(400.f),
    posY(375.f) {

    billyFront.setPosition(posX, posY);

    std::string imagePath = "D:/All Game Stuff And Softwhere/VS Games/Simple 2d platformer/Simple 2d platformer v1/Player/Textures/BillyFront.png";

    if (!texture.loadFromFile(imagePath)) {
        std::cerr << "Error loading texture" << std::endl;
    }
    else {
        texture.setRepeated(true);
        billyFront.setTexture(&texture);
        billyFront.setTextureRect(sf::IntRect(0, 0, 32, 32)); // Texture scale
    }
}

void BillyFront::update(float deltaTime) {
    billyFront.setPosition(posX, posY);
}

void BillyFront::draw(sf::RenderWindow& window) {
    window.draw(billyFront);
}

void BillyFront::draw(sf::RenderWindow& window, float x, float y) {
    billyFront.setPosition(x, y);
    window.draw(billyFront);
}

sf::Vector2f BillyFront::getPosition() const {
    return billyFront.getPosition();
}
