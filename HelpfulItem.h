#pragma once

#include "Item.h"
// #include "Character.h"
struct Character;

struct HelpfulItem : Item
{
    HelpfulItem();
    ~HelpfulItem() override;
    void use(Character* character) override;
};
