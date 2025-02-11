#include <iostream>
#include "Except.cpp"
using namespace std;


enum PlayerError {
	NEGATIVE,
	BIG,
	ZERO
};

class PlayerException : public exception {

	private:
		PlayerError code;
	public:
		PlayerException(PlayerError code): code(code){}
		const char* what() const throw() override{
			if (code == PlayerError::BIG) return "Health > 0";
			if (code == PlayerError::NEGATIVE) return "Health < 0";
			if (code == PlayerError::ZERO) return "Health == 0";
		}
};

class Player {

private:
	int health;
public:
	Player(int health) : health(health) {
		if (health < 0) throw PlayerException(PlayerError::NEGATIVE);
		if (health > 100) throw PlayerException(PlayerError::BIG);
		if (health == 0) throw PlayerException(PlayerError::ZERO);
	};
	int getHealth() {
		return health;
	}
};

void main(){
	//cout << "hello" << endl;

	//Player p1(-1000);

	try {
		int i = 1;
		if (i == 1) throw MyException(MyException::BIG);
	}
	catch (MyException err) {
		cout << err.what() << endl;
	}

	//try {
	//	//Player p(2000);
	//	//Player p(-2000);
	//	//Player p(0);
	//	Player p(7);


	//	cout << p.getHealth() << endl;
	//}
	//catch (PlayerException e) {
	//	cout << e.what() << endl;
	//}


	/*try {
		int x = 9;
		int y = 0;
		if (y == 0) throw std::range_error("y == 0");
		cout << "x/y = " << x / y << endl;
	}
	catch (std::exception e) {
		cout << e.what() << endl;
	}*/
}

