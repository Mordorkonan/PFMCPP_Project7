#pragma once

#include "Character.h"
#include "AttackItem.h"

struct DragonSlayer : Character
{
    DragonSlayer(const std::string& name_, int hp_, int armor_);
    ~DragonSlayer() override;
    virtual const std::string& getName() override;
    virtual std::string getStats() override;

    void attack(Character& other) override;
private:
    const std::string name;
    std::unique_ptr<AttackItem> attackItem = nullptr;
};
