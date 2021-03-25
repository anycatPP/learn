#include<iostream>
using namespace std;
class baseclass{
public:
void disp()
{
cout<<"function of parent class";
}
};
class derivedclass:public baseclass{
public:
void disp()
{
cout<<"function of child class ";
}
};
int main()
{
derivedclass obj=derivedclass();
obj.disp();
return 0;
}

