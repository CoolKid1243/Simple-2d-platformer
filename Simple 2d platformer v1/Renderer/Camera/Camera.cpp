#include "Camera.h"

Camera::Camera(int screenWidth, int screenHeight) :
    view(sf::FloatRect(0.f, 0.f, static_cast<float>(screenWidth), static_cast<float>(screenHeight))),
    zoom(1.f),
    speed(300.f) {
}

void Camera::update(const sf::Vector2f& targetPosition, float deltaTime) {
    sf::Vector2f currentPosition = view.getCenter();
    sf::Vector2f newPosition = currentPosition + (targetPosition - currentPosition) * deltaTime * speed;
    view.setCenter(newPosition);

    float parallaxFactor = 0.5f;
    float mountainX = targetPosition.x * parallaxFactor;
    float mountainY = targetPosition.y * parallaxFactor;
    view.setSize(view.getSize().x, view.getSize().y);
}

void Camera::applyTo(sf::RenderWindow& window) {
    window.setView(view);
}

void Camera::setZoom(float zoom) {
    this->zoom = zoom;
    view.zoom(zoom);
}

float Camera::getZoom() const {
    return zoom;
}

sf::Vector2f Camera::getPosition() const {
    return view.getCenter();
}
