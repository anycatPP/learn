#include<iostream>
using namespace std;
class base1{
public:
~base1()
{
cout<<"base1's destructor"<<endl;
}};
class base2{
public:
~base2()
{
cout<<"base2's destructor's called"<<endl;
}
};
class derived:public base1,public base2{
public:
~derived()
{
cout<<"derived destructor"<<endl;
}};
int main()
{
derived d;
return 0;
}
