#include "gravity.h"

Gravity::Gravity(float gravityValue) : gravity(gravityValue) {}

void Gravity::applyGravity(float& posY, float& verticalVelocity, float deltaTime, float groundLevel, bool& isJumping) {
    if (isJumping) {
        posY += verticalVelocity * deltaTime;
        verticalVelocity += gravity * deltaTime;

        if (posY >= groundLevel) {
            posY = groundLevel;
            isJumping = false;
        }
    }
}
