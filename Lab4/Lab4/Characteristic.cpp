#include "Characteristic.h"

Characteristic::Characteristic(int strenght)
{
	this->strenght = strenght;
}

int Characteristic::getDamage(Gun& gun)
{
	return gun.getDamage() + strenght;
}
