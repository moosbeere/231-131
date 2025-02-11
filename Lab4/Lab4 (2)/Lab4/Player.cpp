#include <iostream>
using namespace std;

template <typename T>
//template <class T>

class Player {
private:
	T health;
public:
	Player(T health) :health(health) {}
	T getHealth() {
		return health;
	}
	void setHealth(T health) {
		this->health = health;
	}
	Player operator +(Player p) {
		return(health + p.getHealth());
	}
	void test(Player* p) {
		if (p == nullptr) return;
		cout << p->getHealth() << endl;
	}
};

//typedef int Coord;
using Coord = int; //для 11 версии компилятора

class Rectangle {
public:
	Coord a;
	Coord b;
};