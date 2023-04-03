#pragma once

#include "Item.h"
#include "DragonSlayer.h"

struct AttackItem : Item
{
    AttackItem() : Item("attack item", 1) { }
    void use(Character* character) override;
};
