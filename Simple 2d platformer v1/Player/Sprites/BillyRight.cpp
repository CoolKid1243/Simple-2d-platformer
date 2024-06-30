#include <SFML/Graphics.hpp>
#include "BillyRight.h"
#include <iostream>

BillyRight::BillyRight() :
    billyRight(sf::Vector2f(32, 32)),
    posX(400.f),
    posY(375.f) {

    billyRight.setPosition(posX, posY);

    std::string imagePath = "D:/All Game Stuff And Softwhere/VS Games/Simple 2d platformer/Simple 2d platformer v1/Player/Textures/BillyRight.png";

    if (!texture.loadFromFile(imagePath)) {
        std::cerr << "Error loading dirt texture" << std::endl;
    }
    else {
        texture.setRepeated(true);
        billyRight.setTexture(&texture);
        billyRight.setTextureRect(sf::IntRect(0, 0, 32, 32)); // Texture scale
    }
}

void BillyRight::update(float deltaTime) {
    billyRight.setPosition(posX, posY);
}

void BillyRight::draw(sf::RenderWindow& window) {
    window.draw(billyRight);
}

void BillyRight::draw(sf::RenderWindow& window, float x, float y) {
    billyRight.setPosition(x, y);
    window.draw(billyRight);
}

sf::Vector2f BillyRight::getPosition() const {
    return billyRight.getPosition();
}
