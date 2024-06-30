#include <SFML/Graphics.hpp>
#include "BillyLeft.h"
#include <iostream>

BillyLeft::BillyLeft() :
    billyLeft(sf::Vector2f(32, 32)),
    posX(400.f),
    posY(375.f) {

    billyLeft.setPosition(posX, posY);

    std::string imagePath = "D:/All Game Stuff And Softwhere/VS Games/Simple 2d platformer/Simple 2d platformer v1/Player/Textures/BillyLeft.png";

    if (!texture.loadFromFile(imagePath)) {
        std::cerr << "Error loading dirt texture" << std::endl;
    }
    else {
        texture.setRepeated(true);
        billyLeft.setTexture(&texture);
        billyLeft.setTextureRect(sf::IntRect(0, 0, 32, 32)); // Texture scale
    }
}

void BillyLeft::update(float deltaTime) {
    billyLeft.setPosition(posX, posY);
}

void BillyLeft::draw(sf::RenderWindow& window) {
    window.draw(billyLeft);
}

void BillyLeft::draw(sf::RenderWindow& window, float x, float y) {
    billyLeft.setPosition(x, y);
    window.draw(billyLeft);
}

sf::Vector2f BillyLeft::getPosition() const {
    return billyLeft.getPosition();
}
