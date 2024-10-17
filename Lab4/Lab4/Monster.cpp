#include "Monster.h"
#include <iostream>
#include <string>


void Monster::printWarning(string msg)
{
    cout << "Warning " << msg << endl;
}

Monster::Monster(string name, float health, float damage, float maxHealth) {
        this->damage = damage;
        this->name = name;
        this->health = health;
        this->maxHealth = maxHealth;
        count++;
    }

Monster::Monster() {

    name = "Spider";

    health = 20;

    damage = 15;

}
void Monster::resetCounter()
{
    count = 0;
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

    void Monster::recovery() {
        this->health = maxHealth;
    }

    void Monster::print()
    {
        cout << "Name: " << name << endl;
        cout << "health: " << health << endl;
        cout << "maxHealth: " << maxHealth << endl;
        cout << "damage: " << damage << endl;
    }

    Monster::operator string() const
    {
        //name = "new Name"; error
        return name + " " + std::to_string((int)health);
    }
