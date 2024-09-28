#include "Monster.h"

void Monster::printWarning(string msg)
{
    cout << "Warning " << msg << endl;
}

Monster::Monster(string name, float health, float damage, float maxHealth) {
        this->damage = damage;
        this->name = name;
        this->health = health;
        this->maxHealth = maxHealth;
    }
    Monster::~Monster() {
        cout << "Object " << this->name << " destroy" << endl;
    }

    string Monster::getName()
    {
        return this->name;
    }

    float Monster::getHealth() {
        return this->health;
    }

    float Monster::getMaxHealth() {
        return this->maxHealth;
    }
    float Monster::getDamage() {
        return this->damage;
    }

    void Monster::setName(string name) {
        this->name = name;
    }

    void Monster::setHealth(float health) {
        if (health > maxHealth) this->health = maxHealth;
        else if (health >= 0) this->health = health;
        else printWarning("health < 0");
    }

    void Monster::setDamage(float damage) {
        this->damage = damage;
    }

    void Monster::setMaxHealth(float maxHealth) {
        this->maxHealth = maxHealth;
    }

    float Monster::getLevel() {
        return this->maxHealth / 5;
    }
    void Monster::applyDamage(float damage) {
        health = health - damage;
    }

    void Monster::attack(Monster& m) {
        m.applyDamage(this->damage);
    }

    void Monster::recovery() {
        this->health = maxHealth;
    }
