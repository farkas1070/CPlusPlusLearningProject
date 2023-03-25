#include "Player.hpp"

Player::Player(int health, int damage, int defense) : Character(health, defense, damage) {}

void Player::attack(Character& other) {
        int damagedealt = damage - other.getDefense();
        if (damagedealt > 0) {
                other.modifyHealth(-damagedealt);
        }
}
