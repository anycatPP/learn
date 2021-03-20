#include<iostream>
using namespace std;
class base{};
class derived:public base{};
int main()
{
base *bp=new derived;
derived *dp=new base;
}
