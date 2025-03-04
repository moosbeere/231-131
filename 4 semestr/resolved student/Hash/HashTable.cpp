#include "HashTable.h"

HashTable::HashTable(int c)
{
	int size = getPrime(c);
	capacity = size;
	table = new list<int>[size];
}

void HashTable::insertItem(int key, int data)
{
	int index = hashFunction(key);
	table[index].push_back(data);
}

void HashTable::displayHash()
{
	for (int i = 0; i < capacity; i++)
	{
		cout << "table[" << i << "]";
		for (auto x : table[i])
			cout << " --> " << x;
		cout << endl;
	}
}

int HashTable::checkPrime(int n)
{
	int i;
	if (n == 1 || n == 0)
	{
		return 0;
	}
	for (i = 2; i < n / 2; i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int HashTable::getPrime(int n)
{
	if (n % 2 == 0)
	{
		n++;
	}
	while (!checkPrime(n))
	{
		n += 2;
	}
	return n;
}

int HashTable::hashFunction(int key)
{
	return key % capacity;
}
