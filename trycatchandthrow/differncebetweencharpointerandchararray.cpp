#include<iostream>
using namespace std;
int main()
{
const char *string="hello";
char string1[]="world";
string++;
cout<<string;
so use pointer character array because you can modify your char array in only O(1) only  but in case of char array you have to modify one by one which is O(n)
which is inefficient
return 0;
}
