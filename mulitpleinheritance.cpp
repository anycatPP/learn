#include<iostream>
using namespace std;
class vehicle{
public:
vehicle()
{
cout<<"this is a vehicle"<<endl;
}
};
class fourwheeler{
public:
fourwheeler()
{
cout<<"this is a 4 wheeler vehicle"<<endl;
}
};
//sub class derived from two base class
class car:public vehicle, public fourwheeler
{
};
int main()
{
car obj;
return 0;
}
