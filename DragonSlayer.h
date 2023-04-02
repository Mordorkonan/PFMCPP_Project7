#pragma once

#include "Character.h"

struct DragonSlayer : Character
{
    DragonSlayer(const std::string& name_, int hp_, int armor_);
    void attack(Character& other) override;
private:
    const std::string name;
};