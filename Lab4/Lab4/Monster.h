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
    Monster();
    static int count;
    static void resetCounter();
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
    virtual void attack(Monster& m) = 0;
    void recovery();
    virtual void print();
    explicit operator string() const;
    ~Monster();
};

