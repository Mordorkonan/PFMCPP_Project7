#pragma once

#include "Item.h"
// #include "Character.h"
struct Character;

struct DefensiveItem : Item
{
    DefensiveItem();
    ~DefensiveItem() override;
    void use(Character* character) override;
};
