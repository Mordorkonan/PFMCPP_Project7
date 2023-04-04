#pragma once

#include "Item.h"
// #include "DragonSlayer.h"
struct DragonSlayer;

struct AttackItem : Item
{
    AttackItem();
    ~AttackItem() override;
    void use(Character* character) override;
};
