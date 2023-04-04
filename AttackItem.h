#pragma once

#include "Item.h"

struct AttackItem : Item
{
    AttackItem();
    ~AttackItem() override;
    void use(Character* character) override;
};
