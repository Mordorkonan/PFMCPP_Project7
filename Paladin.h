#pragma once

#include "Character.h"

struct Paladin : Character
{
    Paladin(const std::string& name_, int hp_, int armor_);
private:
    const std::string name;
};