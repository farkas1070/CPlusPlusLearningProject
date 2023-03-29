#ifndef HEALINGITEM_HPP
#define HEALINGITEM_HPP
#include "Character.hpp"

class Healing_Item{
    int heal_amount;
    
public:
    Healing_Item(int heal_amount);

    int get_heal_amount() const;
};

#endif