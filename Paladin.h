#pragma once

#include "Character.h"

struct Paladin : Character
{
    Paladin(const std::string& name_, int hp_, int armor_);
    ~Paladin() override;
    virtual const std::string& getName() override;
    virtual std::string getStats() override;
private:
    const std::string name;
};