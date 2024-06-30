#include <SFML/Graphics.hpp>
#include "Dirt.h"
#include <iostream>

Dirt::Dirt() :
    dirt(sf::Vector2f(25, 25)),
    posX(400.f),
    posY(525.f) {

    dirt.setPosition(posX, posY);

    std::string imagePath = "D:/All Game Stuff And Softwhere/VS Games/Simple 2d platformer/Simple 2d platformer v1/Renderer/Textures/Dirt.png";

    if (!texture.loadFromFile(imagePath)) {
        std::cerr << "Error loading dirt texture" << std::endl;
    }
    else {
        texture.setRepeated(true);
        dirt.setTexture(&texture);
        dirt.setTextureRect(sf::IntRect(0, 0, 25, 25)); // Texture scale
    }
}

void Dirt::update(float deltaTime) {
    dirt.setPosition(posX, posY);
}

void Dirt::draw(sf::RenderWindow& window) {
    window.draw(dirt);
}

void Dirt::draw(sf::RenderWindow& window, float x, float y) {
    dirt.setPosition(x, y);
    window.draw(dirt);
}

sf::FloatRect Dirt::getBounds() const {
    return dirt.getGlobalBounds();
}
