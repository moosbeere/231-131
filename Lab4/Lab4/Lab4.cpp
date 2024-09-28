// Lab4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


class Monster {
public: 
    string name;
    float health;
    float damage;
    
    //Monster() {
    //    name = "Goblin";
    //    health = 15;
    //    damage = 4;
    //}
    Monster(string name, float health, float damage) {
        this->damage = damage;
        this->name = name;
        this->health = health;
    }
    ~Monster() {
        cout << "Object " << this->name << " destroy" << endl;
    }

    //Monster(string name, float health, float damage) :name(name), health(health), damage(damage) {};
    //Monster() :Monster("Monster", 2, 2) {};
};

int main()
{
    //std::cout << "Hello World!\n";
    Monster m("Goblin", 10, 5);
    //Monster mCopy = m;
    //Monster& mLink = m;

    Monster* pM = &m;
    cout << pM << endl;
    cout << (*pM).damage << endl;
    //Monster mNew;
    cout << m.name << " " << m.damage << " " << m.health << endl;
    //cout << mCopy.name << " " << mCopy.damage << " " << mCopy.health << endl;
    //cout << mLink.name << " " << mLink.damage << " " << mLink.health << endl;
    //cout << mNew.name << " " << mNew.damage << " " << mNew.health << endl;
    //m.name = "Goblin";
    //m.damage = 10.0;
    //m.health = 13;  
    //cout << m.name << " " << m.damage << " " << m.health << endl;
    Monster* monster = new Monster("SkyMonster", 5, 7);
    cout << monster->name << " " << monster->damage << " " << monster->health << endl;
    delete monster;
    
    if (true) {
        Monster test = Monster("test", 4, 5);
        //Monster* monster = new Monster("SkyMonster", 5, 7);
     }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Ti
// ps for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
