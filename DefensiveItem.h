#pragma once

#include "Item.h"

struct DefensiveItem : Item
{
    DefensiveItem();
    ~DefensiveItem() override;
    void use(Character* character) override;
};
