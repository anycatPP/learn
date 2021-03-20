#include<iostream>
#include<string>
using namespace std;
class base{
public:
virtual string print()const
{
return "this is base class";
}
};
class derived:public base
{
public:
virtual string print()const
{
return "this is derived class";
}
};
void describe(base p)
{
cout<<p.print()<<endl;
}
int main()
{
base b;
derived d;
describe(b);
describe(d);
return 0;
}
