#include "Player.hpp"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
Player::Player(int health, int damage, int defense) : Character(health, damage, defense) {}

void Player::attack(Character& other) {
        int damagedealt = damage - other.getDefense();
        if (damagedealt > 0) {
                other.modifyHealth(-damagedealt);
        }
}
void Player::setHealth(int amount){
        health = amount;
        cout << "ennyi az amount: " << amount << endl;
}
void Player::setDamage(int amount){
        damage = amount;
        cout << "ennyi az amount: " << amount << endl;
}
void Player::setDefense(int amount){
        defense = amount;
        cout << "ennyi az amount: " << amount << endl;
}
