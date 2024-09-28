#include "AlMonster.h"

void AlMonster::move(Monster* m)
{
	if (m->health > 0) cout << m->name << " is moving..." << endl;//было m->getName() потом исправили m->name() а скобки цбрать забыли
	else cout << m->name << "is died..." << endl;
}
