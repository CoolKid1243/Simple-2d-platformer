#pragma once
#include <SFML/Graphics.hpp>

class Mountain {
public:
    Mountain();

    void update(float deltaTime);
    void draw(sf::RenderWindow& window);
    void draw(sf::RenderWindow& window, float x, float y);

    void setPosition(float x, float y);

private:
    sf::RectangleShape mountain;
    float posX;
    float posY;
    sf::Texture texture;
};

