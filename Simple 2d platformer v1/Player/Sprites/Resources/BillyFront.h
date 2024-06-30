#pragma once
#include <SFML/Graphics.hpp>

class BillyFront {
public:
    BillyFront();

    void update(float deltaTime);
    void draw(sf::RenderWindow& window);
    void draw(sf::RenderWindow& window, float x, float y);
    sf::Vector2f getPosition() const;

private:
    sf::RectangleShape billyFront;
    float posX;
    float posY;
    sf::Texture texture;
};
