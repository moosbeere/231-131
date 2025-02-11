// Binary_found.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int binary(int array[], int length, int x) {
    int low = 0;
    int high = length - 1;
    while (low <= high) {
        int mid = trunc((low + high) / 2);
        int guess = array[mid];

        if (guess == x) {
            return mid;
        }
        else if (x > guess) {
            low = mid + 1;
        }
        else if (x < guess) {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int array[] = { 1,2,3,4,5 };
    int length = sizeof(array) / sizeof(array[0]);

    std::cout <<  binary(array, length, 3);
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
