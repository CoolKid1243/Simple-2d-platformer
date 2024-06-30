#pragma once
#include <SFML/Graphics.hpp>

class Camera {
public:
    Camera(int screenWidth, int screenHeight);

    void update(const sf::Vector2f& targetPosition, float deltaTime);
    void applyTo(sf::RenderWindow& window);
    void setZoom(float zoom);
    float getZoom() const;
    sf::Vector2f getPosition() const;

private:
    sf::View view;
    float zoom;
    float speed;
};
