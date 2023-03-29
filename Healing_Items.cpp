#include "Healing_Items.hpp"

Healing_Item::Healing_Item(int heal_amount) : heal_amount(heal_amount) {}

int Healing_Item::get_heal_amount() const {
    return heal_amount;
}