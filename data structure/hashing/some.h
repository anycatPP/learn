#include <iostream>
#include <cstdlib>
#include<string>
using namespace std;
#ifndef HASH_H
#define HASH_H

class hashtable {
private:
 	static const int tableSize=10;
	struct item {
		string name;
		string drink;
		item* next;
	};
	item* HashTable[tableSize];
public:
	hashtable();
	int Hash(string key);
	void AddItem(string name, string drink);
	int NumberOfItemsInIndex(int index);
	void PrintTable();

};


#endif // !HASH_H
