#pragma once

#include "Character.h"

struct Paladin : Character
{
    Paladin(const std::string& name_, int hp_, int armor_);
    virtual const std::string& getName() override { return name; }
    virtual std::string getStats() override { return "1"; }
private:
    const std::string name;
};