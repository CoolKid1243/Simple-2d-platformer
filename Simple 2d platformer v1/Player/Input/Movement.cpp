#include "movement.h"
#include <SFML/Graphics.hpp>
#include <iostream>

Movement::Movement()
    : state(State::Front), posX(400.f), posY(478.f), speed(100.f), jumpSpeed(250.f),
    verticalVelocity(0.f), isJumping(false), groundLevel(478.f), gravity(500.f) {}

void Movement::update(float deltaTime) {
    handleInput(deltaTime);
    gravity.applyGravity(posY, verticalVelocity, deltaTime, groundLevel, isJumping);

    switch (state) {
    case State::Front:
        billyFront.update(deltaTime);
        break;
    case State::Left:
        billyLeft.update(deltaTime);
        break;
    case State::Right:
        billyRight.update(deltaTime);
        break;
    case State::Jump:
    case State::InAir:
        billyJump.update(deltaTime);
        break;
    }
}

void Movement::draw(sf::RenderWindow& window) {
    switch (state) {
    case State::Front:
        billyFront.draw(window, posX, posY);
        break;
    case State::Left:
        billyLeft.draw(window, posX, posY);
        break;
    case State::Right:
        billyRight.draw(window, posX, posY);
        break;
    case State::Jump:
    case State::InAir:
        billyJump.draw(window, posX, posY);
        break;
    }
}

void Movement::handleInput(float deltaTime) {
    bool moved = false;

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
        posX -= speed * deltaTime;
        state = State::Left;
        moved = true;
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
        posX += speed * deltaTime;
        state = State::Right;
        moved = true;
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space) && !isJumping) {
        verticalVelocity = -jumpSpeed;
        state = State::Jump;
        isJumping = true;
        moved = true;
    }

    if (!moved && !isJumping) {
        state = State::Front;
    }
}

sf::Vector2f Movement::getPosition() const {
    return sf::Vector2f(posX, posY);
}
