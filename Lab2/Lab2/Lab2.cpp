// Lab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "io.h"
#include <Windows.h>
using namespace std;

//ѕерегрузка функций с реализацией после исполн€емой функции main.
void print(string s);
void print(float f);


int main()
{
	print("hello");
	print(3.3);
	//команды дл€ работы с кириллицей
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//cout << "Enter  your name: ";
	//string name;
	//cin >> name;//считывание с консоли
	//cout << "Hello, " << name;

	//int x;
	//int y;
	//cout << "¬ведите первое число: ";
	//cin >> x;
	//cout << "¬ведите второе число: ";
	//cin >> y;
	//int sum = x + y;
	//cout << sum;
	//int y;
	//cout << "¬ведите число: ";
	//cin >> y;
	////if (y < 10) {
	////	cout << (y * 2);
	////}
	////else {
	////	cout << (y / 10);
	////}

	//y = (y < 10) ? (y * 2) : (y / 10);
	//cout << y;

	//char simvol;

	//cout << "Enter ";
	//cin >> simvol;

	//if (strcmp(&simvol, "+")) cout << "ok";

	//int n = 5;

	//int mult = 1;

	//for (int i = 1; i <= n; i++) {

	//	mult *= i;

	//	std::cout << "!" << i << " = " << mult << "\n";
	//}
	//массивы

	int numbers[5];
	numbers[0] = 1;
	numbers[3] = 4;
	int length = sizeof(numbers) / sizeof(numbers[0]);
	for (int i = 0; i < length; i++) {
		//cout << numbers[i] << " ";
	}

	int array[5] = { 1,2,3,4,5 };
	//перебор массива циклом foreach
	int sum = 0;
	for (int a : array) {
		cout << a << " ";
		sum += a;
	}
	//cout << endl << sum << endl;
	sum = 0;
	for (int i = 0; i < length; i++) {
		sum += array[i];
	}
	//cout << sum << endl;
	//если заранее неопределен тип данных массив, то задаем автоопределение типа дл€ переменной перебора
	for (auto i : array) { break; }

	//двумерные массивы. ѕеребор циклом foreach
	cout << "ƒвумерные массивы" << endl;
	int mas[2][3] = { {1,2,3}, {4,5,6} };
	for (auto& i : mas) {
		for (auto n : i) {
			//cout << n << " ";
		}
		cout << "\n";
	}

}
//реализаци€ функций объ€вленных до исполн€емой функции main
void print(string s)
{
	cout << s << endl;
}
void print(float f)
{
	cout << f + 1 << endl;
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
