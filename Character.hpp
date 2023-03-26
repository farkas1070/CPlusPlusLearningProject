#ifndef CHARACTER_HPP
#define CHARACTER_HPP

class Character
{
protected:
    int health;
    int damage;
    int defense;
    

public:
    Character(int health, int damage, int defense);
    int getHealth() const;
    int getDefense() const;
    int getDamage() const;
    virtual void attack(Character &other) = 0;
    void modifyHealth(int amount);
    bool isDead() const;
    
};

#endif