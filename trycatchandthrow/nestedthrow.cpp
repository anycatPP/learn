#include<iostream>
using namespace std;
int main()
{
try{
try{
throw 20;
}
catch(int n)
{
cout<<"handle partially";
throw;
}
}
catch(int n)
{
cout<<"handle remaining";
}
return 0;
}
