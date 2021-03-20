#include<iostream>
using namespace std;
class vehicle{
public:
vehicle()
{
cout<<"this is a vehicle"<<endl;
}
};
class fourwheeler:public vehicle
{
public:
fourwheeler()
{
cout<<"objects with 4 wheels are vehicle"<<endl;
}
};
class car:public fourwheeler{
public: 
car()
{
cout<<"car has 4 wheels"<<endl;
}
};
int main()
{
car obj;
return 0;
}
