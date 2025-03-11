// Find_width.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <unordered_map>
#include <vector>
#include <queue>

using namespace std;

bool personIsSailer(string name);
void queuePush(vector<string> arr, queue<string>& queue);
bool chekPerson(string person, vector<string>& arr);

int main()
{
    unordered_map<string, vector<string>> graph;
    queue<string> queue;
    vector<string> arr = {};

    graph["you"] = { "alice", "bob", "claire" };
    graph["bob"] = { "anuj", "peggi" };
    graph["alice"] = { "peggi" };
    graph["claire"] = { "thom", "jonny" };
    graph["anuj"] = {};
    graph["peggi"] = {};
    graph["thom"] = {};
    graph["jonny"] = {};

    queuePush(graph["you"], queue);
    while (!queue.empty()) {
        string person = queue.front();
        queue.pop();
        if (chekPerson(person, arr)) {
            if (personIsSailer(person)) {
                        cout << "Is a mango saller!" << endl;
                        return true;
                    }
                    else {
                        queuePush(graph[person], queue);
                    }
        }        
    }
}

bool personIsSailer(string name) {
    
    if (name[name.size()-1] == 'm') return true;
}

void queuePush(vector<string> arr, queue<string>& queue) {
    for (int i = 0; i < arr.size(); i++)
        queue.push(arr[i]);
}

bool chekPerson(string person, vector<string>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == person) {
            return false;
        }
        else arr.push_back(person);
        return true;
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
