//implicit type conversion doesn't happern for primitive types
#include<iostream>
using namespace std;
int main()
{
try{
throw 'a';
}
catch(int x)
{
cout<<"caught"<<x;
}
catch(...)
{
cout<<"default exception";
}
return 0;
}
