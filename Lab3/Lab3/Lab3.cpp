// Lab3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void printArray(int array[], int length);
void printArrayP(int* begin, int* end);
const int cols = 2;
void printArray2(int (*array)[cols], int rows);
void function1();
void function2();
float sum(float a, float b);
float div(float a, float b);
bool compare1(int x, int y);
bool compare2(int x, int y);
int getMax(int array[], int length, bool (*compare)(int, int));
void numberPositive();
void numberNegative();
void (*function(int n))();
int* testNew();



int main()
{
    //std::cout << "Hello World!\n";
    int arr[] = {1,2,3,4,5};
    int arr2[5];
    //cout << *arr << " " << arr << endl;
    for (int* i = arr; i != arr + 5; i++) {
        //cout << *i << " " << endl;
    }
    //cout << arr + 5 << endl;
    char chars[] = { "My string" };
    //cout << chars[3] << endl;
    //cout << chars << endl;
    char* pchars = chars;
    //cout << pchars << endl;
    //cout << (void*)pchars << endl;

    const float PI = 3.14;
    const float G = 9.8;

    const float* pPI = &PI;
    //cout << pPI << endl;
    pPI = &G;//мен€ем адрес €чейки
    pPI += 1;//мен€ем адрес €чейки
    //cout << pPI << endl;

    float a = 2.2;
    float* const pa = &a;
    *pa = 3.2;


    const float p = 10.0;
    const float* const pp = &p;



    int array[] = { 1,2,3,4,5 };
    //cout << getMax(array, 5, compare1);
    int length = sizeof(array) / sizeof(array[0]);
    //printArray(array, length);
    //printArrayP(begin(array), end(array));
    int array2[3][2] = { {1,2}, {3,4}, {5,6} };
    //printArray2(array2,3);
    void (*pf)();
    pf = function1;
    //pf();
    pf = function2;
    //pf();
    void (*pfs[])() = {function1, function2};
    //pfs[0]();
    //pfs[1]();

    float (*operation)(float, float);
    operation = sum;
    //cout << operation(2,3) << endl;
    void (*test)() = function(-5);
    //test();
    test = function(6);
    //test();

    int* pn = testNew();
    cout << pn << " = " << *pn;
    delete pn;



}

void numberPositive()
{
    cout << "+\n";
}

void numberNegative()
{
    cout << "-\n";
}

void(*function(int n))()
{
    if (n < 0) return numberNegative;
    if (n > 0) return numberPositive;
}

int* testNew()
{
    return new int(5);
}

void printArray(int array[], int length)
{
    for (int i = 0; i < length; i++) {
        cout << array[i] << " " << endl;
    }
}
void printArrayP(int* begin, int* end) {
    for (int* p = begin; p < end; p++) {
        cout << *p << " " << endl;
    }
}


void printArray2(int (*array)[cols], int rows)
{
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

void function1()
{
    cout << "Function 1" << endl;
}

void function2()
{
    cout << "Function 2" << endl;
}

float sum(float a, float b)
{
    return a + b;
}

float div(float a, float b)
{
    return a - b;
}

bool compare1(int x, int y)
{
    return x > y;
}

bool compare2(int x, int y)
{
    return x < y;
}

int getMax(int array[], int length, bool(*compare)(int, int))
{
    int max = array[0];
    for (int i = 1; i < length; i++) {
        if (compare(array[i], max)) max = array[i];
    }
    return max;
}


