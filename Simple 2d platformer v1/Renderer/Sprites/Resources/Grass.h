#pragma once
#include <SFML/Graphics.hpp>

class Grass {
public:
    Grass();

    void update(float deltaTime);
    void draw(sf::RenderWindow& window);
    void draw(sf::RenderWindow& window, float x, float y);
    sf::FloatRect getBounds() const;

private:
    sf::RectangleShape grass;
    float posX;
    float posY;
    sf::Texture texture;
};
