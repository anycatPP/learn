#include<iostream>
using namespace std;
int main()
{
try{
throw "hello";
}
catch(char *e)
{
cout<<"caught"<<e;
}
catch(...)
{
cout<<"default exception";
}
return 0;
}
