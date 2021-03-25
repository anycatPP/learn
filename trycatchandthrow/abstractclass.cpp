#include<iostream>
using namespace std;
class test{
int x;
public:
virtual void show()=0;
int getx(){return x;}
};
int main()
{
test t;
return 0;
}
