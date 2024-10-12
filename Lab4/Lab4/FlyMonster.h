#pragma once
#include "Monster.h"

class FlyMonster :
    public Monster
{
public:
    FlyMonster(string name, float health, float damage, float maxHealth, float flySpeed);
    FlyMonster();
    float flySpeed;
    FlyMonster operator + (FlyMonster& m);
    void print() override;
    void attack(Monster& m) override;
};

