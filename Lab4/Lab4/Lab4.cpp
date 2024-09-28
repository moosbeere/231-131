// Lab4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Monster.h"
using namespace std;


void test(const Monster& mLink)
{
    cout << mLink.maxHealth << endl;
    //mLink.setHealth(60);//ошибка
}


int main()
{
    Monster m = Monster("goblin", 4, 6, 90);
    Monster m2 = Monster("attack", 20, 6, 90);
    m.attack(m2);
    cout << m2.getHealth() << endl;
    m.setHealth(55);
    cout << m.getHealth() << endl;
    test(m);



    //cout << m.getLevel() << endl;
    //m.applyDamage(6);
    //m.applyDamage();
    //cout << m.health << endl;
    //m.recovery();
    //cout << m.health << endl;
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
