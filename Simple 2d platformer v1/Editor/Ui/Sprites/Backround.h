#pragma once
#include <SFML/Graphics.hpp>

class Backround {
public:
    Backround();

    void update(float deltaTime);
    void draw(sf::RenderWindow& window);

    void setPosition(float x, float y);
    sf::Vector2f getPosition() const;

private:
    sf::RectangleShape backroundShape;
};
