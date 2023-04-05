#include "Dwarf.h"
#include "Utility.h"

Dwarf::Dwarf(const std::string& name_, int hp_, int armor_) :
Character(hp_, armor_, 4),
name(name_)
{
    defensiveItems = makeDefensiveItems(5);
    helpfulItems = makeHelpfulItems(2);
}

Dwarf::~Dwarf() { }

const std::string& Dwarf::getName() { return name; }

std::string Dwarf::getStats()
{
    return getCharacterStats(this);
}
