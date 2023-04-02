#include "Paladin.h"

// Paladin::Paladin
Paladin::Paladin(const std::string& name_, int hp_, int armor_) :
    name(name_),
    Character(hp_, armor_, 10)
    { }
// Paladin::getName

// Paladin::getStats