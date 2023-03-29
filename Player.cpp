#include "Player.hpp"
#include <iostream>
using std::cout;
using std::endl;
Player::Player(int health, int damage, int defense) : Character(health, damage, defense) {}

void Player::attack(Character &other) {
        int damagedealt = damage - other.getDefense();
        cout<<"you attacked"<<(damagedealt)<<endl;
        if (damagedealt > 0) {
                other.modifyHealth(-damagedealt);
        }
}


void Player::heal(Healing_Item &item) {
        health += item.get_heal_amount();
}

