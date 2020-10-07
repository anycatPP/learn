#include <iostream>
#include "some.h"
#include <cstdlib>
#include<string>
using namespace std;
hashtable::hashtable()
{
	for (int i = 0; i < tableSize; i++) {
		HashTable[i] = new item;
		HashTable[i]->name = "empty";
		HashTable[i]->drink = "empty";
		HashTable[i]->next = NULL;
	}
}
void hashtable::AddItem(string name, string drink)
	{
		int index = Hash(name);
		if (HashTable[index]->name == "empty")
		{
			HashTable[index]->name = name;
			HashTable[index]->drink = drink;
		}
		else
		{
			item* Ptr = HashTable[index];
			item* n = new item;
			n->name = name;
			n->drink = drink;
			n->next = NULL;
			while (Ptr->next != NULL)
			{
				Ptr = Ptr->next;
			}Ptr->next = n;
			{

			}
		}
	}
int hashtable::NumberOfItemsInIndex(int index)
{
	int count = 0;
	if (HashTable[index]->name == "empty")
	{
		return count;
	}
	else
	{
		count++;
		item* Ptr = HashTable[index];
		while (Ptr->next != NULL)
		{
			count++;
			Ptr = Ptr->next;
		}
	}
}
void hashtable::PrintTable()
{
	int number;
	for (int i = 0; i < tableSize; i++)
	{
		number = NumberOfItemsInIndex(i);
		cout << "-------------------\n";
		cout << "index=" << i << endl;
		cout << HashTable[i]->name << endl;
		cout << HashTable[i]->drink << endl;
		cout <<"no of items="<<number<< endl;
		cout << "-------------\n";
	}
}
int hashtable::Hash(string key)
{
	int hash = 0;
	int index;
	index = key.length();
	for (int i = 0; i < key.length(); i++)
	{
		hash = hash + (int)key[i];
	
	}
	index = hash % tableSize;

	return index;
}