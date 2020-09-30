#include<iostream>
using namespace std;
int main()
{	//this will give error because const can be changed not even get compiled
	const char *str="cpp"; //string literal example its constant cant be changed unlike string 
	but it can be swapped with another string literal
	const char* ptr ="sadf";
	ptr=str; // true 

	char str[3]="fas";
	return 0;
}
