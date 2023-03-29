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
        return health <= 0;
}
void Character::setHealth(int amount){
        health = amount;
        
}
void Character::setDamage(int amount){
        damage = amount;
        
}
void Character::setDefense(int amount){
        defense = amount;
        
}


