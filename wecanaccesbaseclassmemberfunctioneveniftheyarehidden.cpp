#include<iostream>
using namespace std;
class base{
public:
int fun()
{
cout<<"base::fun()called";}
int fun(int i)
{
cout<<"base::fun(int i) called";
}
};
class derived:public base
{
public:
int fun()
{
cout<<"derived::fun() called";
}
};
int main()
{
derived d;
d.base::fun(4);
return 0;
}
