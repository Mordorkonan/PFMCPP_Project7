#include "Dragon.h"
#include "DragonSlayer.h"

Dragon::Dragon(const std::string& name_, int hp_, int armor_) :
    name(name_),
    Character(hp_, armor_, 80)
    { }

void Dragon::attack(Character &other)
{
    std::cout << name << " is attacking " << other.getName() << "!!!" << std::endl;
    if( auto* slayer = dynamic_cast<DragonSlayer*>(&other) )
    {
        //dragons can't attack dragon slayers
        slayer->defend();
    }
    else
    {
        Character::attack(other);
    }
}

//Dragon::getName

//Dragon::getStats