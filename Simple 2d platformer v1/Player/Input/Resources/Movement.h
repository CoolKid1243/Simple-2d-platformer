#ifndef MOVEMENT_H
#define MOVEMENT_H

#include <SFML/Graphics.hpp>
#include "BillyFront.h"
#include "BillyLeft.h"
#include "BillyRight.h"
#include "BillyJump.h"
#include "gravity.h"

class Movement {
public:
    Movement();
    void update(float deltaTime);
    void draw(sf::RenderWindow& window);
    sf::Vector2f getPosition() const;

private:
    BillyFront billyFront;
    BillyLeft billyLeft;
    BillyRight billyRight;
    BillyJump billyJump;

    enum class State {
        Front,
        Left,
        Right,
        Jump,
        InAir
    } state;

    void handleInput(float deltaTime);

    float posX;
    float posY;
    float speed;
    float jumpSpeed;
    float verticalVelocity;
    bool isJumping;
    float groundLevel;

    Gravity gravity;
};

#endif // MOVEMENT_H
