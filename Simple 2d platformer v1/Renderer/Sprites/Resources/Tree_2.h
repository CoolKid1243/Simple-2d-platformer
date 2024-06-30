#pragma once
#include <SFML/Graphics.hpp>

class Tree_2 {
public:
    Tree_2();

    void update(float deltaTime);
    void draw(sf::RenderWindow& window);
    void draw(sf::RenderWindow& window, float x, float y);

private:
    sf::RectangleShape tree_2;
    float posX;
    float posY;
    sf::Texture texture;
};
