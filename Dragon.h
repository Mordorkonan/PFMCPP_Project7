#pragma once

#include "Character.h"

struct Dragon : Character
{
    Dragon(const std::string& name_, int hp_, int armor_);
    virtual const std::string& getName() override { return name; }
    virtual std::string getStats() override { return "1"; }

    void attack(Character& other) override;
private:
    const std::string name;
};

