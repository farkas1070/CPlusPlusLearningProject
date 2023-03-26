#include "Player.hpp"

Player::Player(int health, int damage, int defense) : Character(health, damage, defense) {}

void Player::attack(Character& other) {
        int damagedealt = damage - other.getDefense();
        if (damagedealt > 0) {
                other.modifyHealth(-damagedealt);
        }
}

void Player::setHealth(int amount){
        health = amount;
        
}
void Player::setDamage(int amount){
        damage = amount;
        
}
void Player::setDefense(int amount){
        defense = amount;
        
}

