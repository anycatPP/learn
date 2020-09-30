#include<iostream>
using namespace std;
int main()
{	//this will give error because const can be changed not even get compiled
	const char *str="cpp";

	char str[3]="fas";
	return 0;
}
