#ifndef PLAYER_HPP
#define PLAYER_HPP
#include "Character.hpp"

class Player : public Character {

public:
    Player(int health, int damage, int defense);

    virtual void attack(Character& other);
    void setHealth(int amount);
    void setDamage(int amount);
    void setDefense(int amount);
    
};

#endif