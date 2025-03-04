// phone_book.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int main()
{
    unordered_map<string, int> phone_book;
    phone_book["Karry"] = 535;
    phone_book["Bob"] = 76;
    phone_book["Lili"] = 656;
    phone_book["Jenny"] = 888;

    for (auto elem : phone_book) {
        cout << elem.first << " " << elem.second << endl;
    }

    cout << phone_book["Lili"] << endl;

    unordered_set<string> voted;
    string name;
    cout << "Enter your name: ";
    cin >> name;
    auto search = voted.find(name);
    if (search != voted.end()) {
        cout << "Kick them out";
    }
    else {
        voted.insert(name);
        cout << "Late them vote!";
    }

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
