#include<iostream>
using namespace std;
int main()
{
int n;
bool isprime=true;
cout<<"enter no";
cin>>n;
if(n==0||n==1)
isprime=false;
else
for(int i=2;i<=n/2;i++)
{
if(n%i==0)
{
isprime=false;
break;
}
}
if(isprime)
cout<<"is prime";
else 
cout<<"is not prime";

return 0;
}

