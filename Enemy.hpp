#ifndef ENEMY_HPP
#define ENEMY_HPP
#include "Character.hpp"

class Enemy : public Character{

public:
    Enemy(int health, int damage, int defense);

    virtual void attack(Character& other);
    
};

#endif