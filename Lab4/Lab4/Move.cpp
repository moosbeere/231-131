#include "Move.h"
#include "iostream"
using namespace std;

//void Move::move(int d)
//{
//	//if (d > 4 || d < 1) {
//		if (d == NORTH) cout << "�������� �� �����";
//		else if (d == EAST) cout << "�������� �� ������";
//		else if (d == WEST) cout << "�������� �� �����";
//		else if (d == SOUTH) cout << "�������� �� ��";
//	//}
//	
//}

void Move::move(Direction d)
{
	if (d == Direction::NORTH) cout << "�������� �� �����" << endl;
		else if (d == Direction::EAST) cout << "�������� �� ������" << endl;
		else if (d == Direction::WEST) cout << "�������� �� �����" << endl;
		else if (d == Direction::NORTH) cout << "�������� �� ��" << endl;
}
