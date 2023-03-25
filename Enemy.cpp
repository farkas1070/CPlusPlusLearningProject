#include "Enemy.hpp"

Enemy::Enemy(int health, int damage, int defense) : Character(health,defense,damage) {}

void Enemy::attack(Character& other) {
        int damagedealt  = damage - other.getDefense();
        if (damagedealt > 0) {
                other.modifyHealth(-damagedealt);
        }
}