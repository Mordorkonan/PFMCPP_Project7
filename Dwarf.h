#pragma once

#include "Character.h"

struct Dwarf : Character
{
    Dwarf(const std::string& name_, int hp_, int armor_);
    ~Dwarf() override;
    virtual const std::string& getName() override;
    virtual std::string getStats() override;
private:
    const std::string name;
};
