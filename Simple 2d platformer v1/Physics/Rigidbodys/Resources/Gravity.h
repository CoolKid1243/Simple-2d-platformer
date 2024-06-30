#ifndef GRAVITY_H
#define GRAVITY_H

class Gravity {
public:
    Gravity(float gravityValue);

    void applyGravity(float& posY, float& verticalVelocity, float deltaTime, float groundLevel, bool& isJumping);

private:
    float gravity;
};

#endif // GRAVITY_H
