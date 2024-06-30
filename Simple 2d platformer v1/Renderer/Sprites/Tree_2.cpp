#include <SFML/Graphics.hpp>
#include "Tree_2.h"
#include <iostream>

Tree_2::Tree_2() :
    tree_2(sf::Vector2f(64, 64)),
    posX(0.f),
    posY(0.f) {

    tree_2.setPosition(posX, posY);

    std::string imagePath = "D:/All Game Stuff And Softwhere/VS Games/Simple 2d platformer/Simple 2d platformer v1/Renderer/Textures/Tree_2.png";

    if (!texture.loadFromFile(imagePath)) {
        std::cerr << "Error loading dirt texture" << std::endl;
    }
    else {
        texture.setRepeated(true);
        tree_2.setTexture(&texture);
        tree_2.setTextureRect(sf::IntRect(0, 0, 32, 32)); // Texture scale
    }
}

void Tree_2::update(float deltaTime) {
    tree_2.setPosition(posX, posY);
}

void Tree_2::draw(sf::RenderWindow& window) {
    window.draw(tree_2);
}

void Tree_2::draw(sf::RenderWindow& window, float x, float y) {
    tree_2.setPosition(x, y);
    window.draw(tree_2);
}
