#pragma once
#include "Gun.h"

class Gun;

class Characteristic
{
public:
	//friend class Gun;
	int strenght;
	Characteristic(int strenght);
	int getDamage(Gun& gun);
};

