#include<iostream>
using namespace std;
class complex{
private:
int real,img;
public:
complex(int r=0,int i=0){
real=r;
imag=i;
}};
int main()
{
complex c1(10,5),c2(2,4);
c1=c2;
if(c1==c2)
cout<<"same";
return 0;
}
