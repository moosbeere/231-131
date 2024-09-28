#pragma once
#include "iostream";
using namespace std;

class Monster
{
    friend class AlMonster;
protected:
    void printWarning(string msg);
private:
    string name;
    float health;
    float damage;
    float maxHealth;
public:
    Monster(string name, float health, float damage, float maxHealth);
    ~Monster();
    friend void test(const Monster& mLink);
    string getName();
    float getHealth();
    float getDamage();
    float getMaxHealth();
    void setName(string name);
    void setHealth(float health);
    void setMaxHealth(float maxHealth);
    void setDamage(float damage);

    float getLevel();
    void applyDamage(float damage);
    void attack(Monster& m);
    void recovery();
};

