#include<iostream>
using namespace std;
class base{
public:
int fun(){
cout<<"base::fun called";
}
class derived:public base{
public:
int fun()(
{
cout<<"derived::fun() called";
}
}
int main()
{
derived d;
d.fun(5);
return 0;
}
