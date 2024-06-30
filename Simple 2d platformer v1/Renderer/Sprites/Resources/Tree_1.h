#pragma once
#include <SFML/Graphics.hpp>

class Tree_1 {
public:
    Tree_1();

    void update(float deltaTime);
    void draw(sf::RenderWindow& window);
    void draw(sf::RenderWindow& window, float x, float y);

private:
    sf::RectangleShape tree_1;
    float posX;
    float posY;
    sf::Texture texture;
};
