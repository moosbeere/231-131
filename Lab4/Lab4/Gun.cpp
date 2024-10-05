#include "Gun.h"

Gun::Gun(string name, int damage, int weight)
{
	this->name = name;
	this->damage = damage;
	this->weight = weight;

}

int Gun::getDamage()
{
	return this->damage;
}
