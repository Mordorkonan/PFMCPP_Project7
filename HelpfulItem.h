#pragma once

#include "Item.h"

struct HelpfulItem : Item
{
    HelpfulItem();
    ~HelpfulItem() override;
    void use(Character* character) override;
};
