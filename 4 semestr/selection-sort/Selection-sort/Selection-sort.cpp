// Selection-sort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

int findMin(vector<int> arr, int x);
vector<int> selectionSort(vector<int> arr);

int main()
{
	vector<int> array{ 4,6,2,8,3 };
	vector<int> resArr = selectionSort(array);
	for (int n : resArr) cout << n << ", ";
}

int findMin(vector<int> arr, int x) {
	int min_element = arr[x];
	int min_index = x;
	for (int i = x; i < arr.size(); i++) {
		if (arr[i] < min_element) {
			min_element = arr[i];
			min_index = i;
		}
	}
	return min_index;
}

vector<int> selectionSort(vector<int> arr) {
	for (int i = 0; i < arr.size(); i++) {
		int min_index = findMin(arr, i);
		int temp = arr[i];
		arr[i] = arr[min_index];
		arr[min_index] = temp;
	}
	return arr;
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
