#include<iostream>
using namespace std;
class vehicle{
public:
vehicle()
{
cout<<"this is a vehicle"<<endl;
}
};
class car:public vehicle
{
};
class bus:public vehicle
{
};
int main()
{
car obj;
bus obj2;
return 0;
}
