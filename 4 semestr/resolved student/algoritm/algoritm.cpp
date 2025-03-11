// algoritm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <unordered_map>
#include <limits>
#include <vector>
using namespace std;

string find_lowest_cost_node(unordered_map<string, int> costs, vector<string> processed);
bool node_not_in_processed(vector<string> processed, string usel);

int main()
{
	//хеш-таюлица для графа
	unordered_map<string, unordered_map<string, int>> graph;
	graph["start"] = {};
	graph["start"]["a"] = 6;
	graph["start"]["b"] = 2;
	//cout << graph["start"]["a"];
	graph["a"] = {};
	graph["a"]["fin"] = 1;
	graph["b"] = {};
	graph["b"]["fin"] = 5;
	graph["b"]["a"] = 3;
	graph["fin"] = {};

	//хеш таблица стоимостей
	int inf = numeric_limits<int>::max();
	unordered_map<string, int> costs = {};
	costs["a"] = 6;
	costs["b"] = 2;
	costs["fin"] = inf;

	//хеш-таблица родителей
	unordered_map<string, string> parents = {};
	parents["a"] = "start";
	parents["b"] = "start";
	parents["fin"] = "";

	//массив обработанных узлов
	vector<string> processed = {};

	string node = find_lowest_cost_node(costs, processed);
	//for (auto& elem : graph[node]) {
	//	cout << elem.first << " " << elem.second << endl;
	//}
	
	while (!node.empty()) {
		int cost = costs[node];
		unordered_map<string, int>neighbors = graph[node];
		for (auto& elem : neighbors) {
			int new_cost = cost + elem.second;
			if (costs[elem.first] > new_cost) {
				costs[elem.first] = new_cost;
				parents[elem.first] = node;
				//cout << parents[elem.first] << endl;
			}
		}
		processed.push_back(node);
		node = find_lowest_cost_node(costs, processed);
	}

	for (auto& elem : parents) {
		cout << elem.first << " " << elem.second << endl;
	}

}

string find_lowest_cost_node(unordered_map<string, int> costs, vector<string> processed) {
	int inf = numeric_limits<int>::max();
	int lowest_cost = inf;
	string lowest_cost_node = "";
	for (auto& elem : costs) {
		int cost = elem.second;
		if (cost < lowest_cost && !node_not_in_processed(processed, elem.first)) {
			lowest_cost = cost;
			lowest_cost_node = elem.first;
		}
	}
	return lowest_cost_node;
}

bool node_not_in_processed(vector<string> processed, string usel) {
	for (string elem : processed) {
		if (elem == usel) return true;
	}
	return false;
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
