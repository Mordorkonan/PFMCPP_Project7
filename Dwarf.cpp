#include "Dwarf.h"

Dwarf::Dwarf(const std::string& name_, int hp, int armor) :
    name(name_),
    Character(hp, armor, 4)
    { }

const std::string& Dwarf::getName() { return name; }

std::string Dwarf::getStats()
{
    return getCharacterStats(this);
}
