#include "Move.h"
#include "iostream"
using namespace std;

//void Move::move(int d)
//{
//	//if (d > 4 || d < 1) {
//		if (d == NORTH) cout << "Движемся на Север";
//		else if (d == EAST) cout << "Движемся на Восток";
//		else if (d == WEST) cout << "Движемся на Запад";
//		else if (d == SOUTH) cout << "Движемся на Юг";
//	//}
//	
//}

void Move::move(Direction d)
{
	if (d == Direction::NORTH) cout << "Движемся на Север" << endl;
		else if (d == Direction::EAST) cout << "Движемся на Восток" << endl;
		else if (d == Direction::WEST) cout << "Движемся на Запад" << endl;
		else if (d == Direction::NORTH) cout << "Движемся на Юг" << endl;
}
