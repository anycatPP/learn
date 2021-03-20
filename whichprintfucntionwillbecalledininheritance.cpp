#include<iostream>
using namespace std;
class p{
public:
void print(){
cout<<"inside p";
}
};
class q:public p{
public:
void print()
{
cout<<"inside q";
}
};
class r:public q{};
int main()
{
r rr;
rr.print();
return 0;
}
