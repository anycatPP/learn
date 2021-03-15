#include<iostream>
using namespace std;
class complex{
private:
int real;
int imag;
public:
complex(int r=0,int i=0)
{
real=r;
imag=i;
}
friend ostream & operator<<(ostream &out,const complex &c);
};
ostream & operator <<(ostream &out,const complex &c)
{
out<<c.real;
out<<"+i"<<c.imag;
return out;
}
int main()
{
complex c1(10,14);
cout<<c1;
return 0;
}
