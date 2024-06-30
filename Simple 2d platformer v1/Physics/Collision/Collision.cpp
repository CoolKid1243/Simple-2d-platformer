#include "collision.h"

bool Collision::checkCollision(const sf::FloatRect& object1, const sf::FloatRect& object2) {
    return object1.intersects(object2);
}
