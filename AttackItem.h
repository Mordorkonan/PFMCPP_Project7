#pragma once

#include "Item.h"
// #include "DragonSlayer.h"
struct DragonSlayer;

struct AttackItem : Item
{
    AttackItem() : Item("attack item", 10) { }
    void use(Character* character) override;
};
