#include<iostream>
using namespace std;
class base{
public:
void show()
{ 
cout<<"in base";
}
};
class derived:public base
{
public:
int x;
void show()
{
cout<<"in derived";
}
derived()
{
x=10;
}
};
int main(void)
{
base *bp,b;
derived d;
bp=&d;
bp->show();
cout<<bp->x;
return 0;
}
