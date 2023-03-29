#ifndef PLAYER_HPP
#define PLAYER_HPP
#include "Character.hpp"
#include "Healing_Items.hpp"
class Player : public Character {

public:
    Player(int health, int damage, int defense);

    virtual void attack(Character &other);
    
    void heal(Healing_Item &item);
    
};

#endif