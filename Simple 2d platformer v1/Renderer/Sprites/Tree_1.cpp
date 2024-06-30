#include <SFML/Graphics.hpp>
#include "Tree_1.h"
#include <iostream>

Tree_1::Tree_1() :
    tree_1(sf::Vector2f(64, 64)),
    posX(0.f),
    posY(0.f) {

    tree_1.setPosition(posX, posY);

    std::string imagePath = "D:/All Game Stuff And Softwhere/VS Games/Simple 2d platformer/Simple 2d platformer v1/Renderer/Textures/Tree_1.png";

    if (!texture.loadFromFile(imagePath)) {
        std::cerr << "Error loading dirt texture" << std::endl;
    }
    else {
        texture.setRepeated(true);
        tree_1.setTexture(&texture);
        tree_1.setTextureRect(sf::IntRect(0, 0, 32, 32)); // Texture scale
    }
}

void Tree_1::update(float deltaTime) {
    tree_1.setPosition(posX, posY);
}

void Tree_1::draw(sf::RenderWindow& window) {
    window.draw(tree_1);
}

void Tree_1::draw(sf::RenderWindow& window, float x, float y) {
    tree_1.setPosition(x, y);
    window.draw(tree_1);
}
