// Lab4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Monster.h"
#include "Gun.h"
#include "Characteristic.h"
#include "Move.h"
#include "FlyMonster.h"
#include "CrawlingMonster.h"
#include "Player.cpp"

using namespace std;

//Lab4
int Monster::count = 0;

void test(const Monster& mLink)
{
    cout << mLink.maxHealth << endl;
    //mLink.setHealth(60);//ошибка
}

//Lab5
struct Item {
    string name;
    string description;
    float price = 0;

    void print() {
        cout << "Name " << name << endl;
        cout << description << endl;
        cout << price << endl;
    }
};

void printItem(Item& item);

bool operator < (FlyMonster m1, FlyMonster m2) {
    return m1.getHealth() < m2.getHealth();
}
bool operator > (FlyMonster m1, FlyMonster m2) {
    return m1.getHealth() > m2.getHealth();
}
template <typename TF>

TF add(TF a, TF b) {
    return a + b;
}

int main()
{
    Player<float> p1(10.12);
    Player<float> p2(20);
    cout << p1.getHealth() << endl;
    cout << (p1 + p2).getHealth() << endl;
    cout << add(p1, p2).getHealth() << endl;

    p1.test(nullptr);
    p1.test(&p2);

    //CrawlingMonster crm;
    ////Monster m;
    //FlyMonster m1 = FlyMonster("Dragon", 10, 2, 20, 4);
    //FlyMonster m2 = FlyMonster("Amfibia", 20, 2, 30, 4);
    ////cout << m1.getHealth() << endl;
    ////cout << m2.getHealth() << endl;

    ////cout << (m1 < m2) << endl;
    //FlyMonster m3 = m1 + m2;
    ////m3.print();
    //string s = (string)m3;
    ////cout << s << endl;

    //m1.attack(m2);
    //m2.print();
    //crm.attack(m2);

    /*Monster monsters[] = { Monster(), FlyMonster(), FlyMonster()};
    for (auto n : monsters) {
        cout << (string)n << endl;
    }*/



    //lab5
    setlocale(LC_ALL, "RU");
    //Move::move(Direction::EAST);
    //Move::move(Direction::WEST);

    //Item item;
    //item.name = "Зелье здоровья";
    //item.description = "Вщсстанавливает 50 единиц здоровья";
    //item.price = 20;
    ////cout << item.name << endl;
    //printItem(item);
    //Item item2 = { "Save live", "Bonus", 100 };
    //printItem(item2);
    //item2.print();


    /*Lab4
    Monster m = Monster("goblin", 4, 6, 90);
    Monster m2 = Monster("attack", 20, 6, 90);
    m.attack(m2);
    cout << m2.getHealth() << endl;
    m.setHealth(55);
    cout << m.getHealth() << endl;
    test(m);
    cout << Monster::count << endl;
    Monster::resetCounter();
    cout << m2.count << endl;
    Gun palka = Gun("palka",2, 5);
    Characteristic ch = Characteristic(5);
    cout << ch.getDamage(palka) << endl;*/

    //cout << m.getLevel() << endl;
    //m.applyDamage(6);
    //m.applyDamage();
    //cout << m.health << endl;
    //m.recovery();
    //cout << m.health << endl;
}

//lab5
void printItem(Item& item) {
    cout << "Name " << item.name << endl;
    cout << item.description << endl;
    cout << item.price << endl;
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
