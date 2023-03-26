#include "Character.hpp"

Character::Character(int health, int damage, int defense) : health(health), damage(damage), defense(defense) {}

int Character::getHealth() const
{
    return health;
}
int Character::getDefense() const
{
    return defense;
}
int Character::getDamage() const
{
    return damage;
}
void Character::modifyHealth(int amount) {
        health += amount;
    }
bool Character::isDead() const {
        return health > 0;
}