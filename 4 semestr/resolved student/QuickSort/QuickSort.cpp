// QuickSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

void quick_sort(int data[], int start, int end);
void swap(int data[], int first, int second);

int main()
{
    //std::cout << "Hello World!\n";
    int arr[] = {5,3,8,1,4,9};
    quick_sort(arr, 0, (sizeof(arr) / sizeof(arr[0])) - 1);
    for (int elem : arr) {
        std::cout << elem << ", ";
    }
}

void quick_sort(int data[], int start, int end)
{
    if (start >= end) return;
    int current{ start };
    //std::cout << current;
    for (int i{ start + 1 }; i <= end; i++) {
        if (data[i] < data[start]) swap(data, current, i);
    }
    swap(data, start, current);
    if (current > start) quick_sort(data, start, current - 1);
    if (end > current) quick_sort(data, current + 1, end);
}

void swap(int data[], int first, int second)
{
    auto temp = data[first];
    data[first] = data[second];
    data[second] = temp;
}
