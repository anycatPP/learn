#include<iostream>
using namespace std;
int main()
{
int x=-1;
cout<<"before try";
try{
cout<<"inside try";
if(x<0)
{
throw x;
cout<<"after throw(never executed)";
}
}
catch(int x)
{
cout<<"exception caught";
}
cout<<"after catch ";
return 0;
}
