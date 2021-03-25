#include<iostream>
using namespace std;
class base1{
public:
base1()
{
cout<<"base1 construtor's called";
}
};
class base2{
public:
base2()
{
cout<<"base2 constructor's called";
}
};
class derived:public base1,public base2 {
public:
derived()
{
cout<<"derived's constructor called"<<endl;
}};
int main()
{
derived d;
return 0;
}
