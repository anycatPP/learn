#include<iostream>
using namespace std;
class box{
private:
int l,b,h;
public:
void setdimension(int x,int y,int z)
{
l=x;
b=y;
h=z;
}
void showdimension()
{
cout<<"l="<<l<<"b="<<b<<"h="<<h;
}
};
int main()
{
box smallbox;
box *p;
p=&smalbox;
p->setdimension(12,10,5);
p->showdimension();
}
