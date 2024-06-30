#pragma once
#include <SFML/Graphics.hpp>

class BillyJump {
public:
    BillyJump();

    void update(float deltaTime);
    void draw(sf::RenderWindow& window);
    void draw(sf::RenderWindow& window, float x, float y);
    sf::Vector2f getPosition() const;

private:
    sf::RectangleShape billyJump;
    float posX;
    float posY;
    sf::Texture texture;
};
