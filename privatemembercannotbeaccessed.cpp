#include<iostream>
using namespace std;
class base{
private:
int i,j;
public:
base(int _i=0,int _j=0):i(_i),j(_j){}
};
class derived:public base{
public:
void show()
{
cout<<"i="<<i<<"j="<<j;
}
};
int main(void)
{
derived d;
d.show();
return 0;
}
