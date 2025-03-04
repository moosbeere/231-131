#pragma once
#include <iostream>
#include <list>
using namespace std;

class HashTable
{
	int capacity;
	list<int>* table;
public:
	HashTable(int c);
	void insertItem(int key, int data);
	void displayHash();
	int checkPrime(int n);
	int getPrime(int n);
	int hashFunction(int key);
};

