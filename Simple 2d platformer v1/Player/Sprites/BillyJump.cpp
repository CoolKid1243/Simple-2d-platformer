#include <SFML/Graphics.hpp>
#include "BillyJump.h"
#include <iostream>

BillyJump::BillyJump() :
    billyJump(sf::Vector2f(32, 32)),
    posX(400.f),
    posY(375.f) {

    billyJump.setPosition(posX, posY);

    std::string imagePath = "D:/All Game Stuff And Softwhere/VS Games/Simple 2d platformer/Simple 2d platformer v1/Player/Textures/BillyJump.png";

    if (!texture.loadFromFile(imagePath)) {
        std::cerr << "Error loading dirt texture" << std::endl;
    }
    else {
        texture.setRepeated(true);
        billyJump.setTexture(&texture);
        billyJump.setTextureRect(sf::IntRect(0, 0, 32, 32)); // Texture scale
    }
}

void BillyJump::update(float deltaTime) {
    billyJump.setPosition(posX, posY);
}

void BillyJump::draw(sf::RenderWindow& window) {
    window.draw(billyJump);
}

void BillyJump::draw(sf::RenderWindow& window, float x, float y) {
    billyJump.setPosition(x, y);
    window.draw(billyJump);
}

sf::Vector2f BillyJump::getPosition() const {
    return billyJump.getPosition();
}
