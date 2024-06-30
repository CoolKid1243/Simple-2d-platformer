#ifndef COLLISION_H
#define COLLISION_H

#include <SFML/Graphics.hpp>

class Collision {
public:
    static bool checkCollision(const sf::FloatRect& object1, const sf::FloatRect& object2);
};

#endif // COLLISION_H
