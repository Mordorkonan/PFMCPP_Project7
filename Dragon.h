#pragma once

#include "Character.h"

struct Dragon : Character
{
    Dragon(const std::string& name_, int hp_, int armor_);
    // ~Dragon() override { }
    virtual const std::string& getName() override;
    virtual std::string getStats() override;

    void attack(Character& other) override;
private:
    const std::string name;
};

