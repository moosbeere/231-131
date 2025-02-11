#include "FlyMonster.h"

FlyMonster::FlyMonster(string name, float health, float damage, float maxHealth, float flySpeed):Monster(name, health, damage, maxHealth)
{
	this->flySpeed = flySpeed;
}

FlyMonster::FlyMonster():FlyMonster("Dragon", 1,2,3,4)
{

}

FlyMonster FlyMonster::operator+(FlyMonster& m)
{
	return FlyMonster(this->getName(), this->getHealth() + m.getHealth(), this->getDamage() + m.getDamage(), this->getMaxHealth() + m.getMaxHealth(), this->flySpeed + m.flySpeed);
}

void FlyMonster::print()
{
	Monster::print();
	cout << "FlySpeed: " << flySpeed << endl;
}

void FlyMonster::attack(Monster& m)
{
	m.applyDamage(this->getDamage());
}

