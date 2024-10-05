#pragma once
#include "iostream"
#include "Characteristic.h"


using namespace std;

class Gun
{
private:
	string name;
	int damage;
	int weight;

public:
	Gun(string name, int damage, int weight);
	//int getSumWeight(Gun& gun);
	int getDamage();
	//int getWeight();

	friend class Characteristric;
};

