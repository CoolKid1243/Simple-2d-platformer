#include <SFML/Graphics.hpp>
#include "Backround.h"

Backround::Backround() :
    backroundShape(sf::Vector2f(200, 600)) {
    backroundShape.setFillColor(sf::Color(200, 200, 200)); // Light grey color
    backroundShape.setPosition(0, 0); // Default position
}

void Backround::update(float deltaTime) {
    // Update background if necessary
}

void Backround::draw(sf::RenderWindow& window) {
    window.draw(backroundShape);
}

void Backround::setPosition(float x, float y) {
    backroundShape.setPosition(x, y);
}

sf::Vector2f Backround::getPosition() const {
    return backroundShape.getPosition();
}
