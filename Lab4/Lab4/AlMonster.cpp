#include "AlMonster.h"

void AlMonster::move(Monster* m)
{
	if (m->health > 0) cout << m->name << " is moving..." << endl;//���� m->getName() ����� ��������� m->name() � ������ ������ ������
	else cout << m->name << "is died..." << endl;
}
