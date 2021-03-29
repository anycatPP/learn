#include<iostream>
using namespace std;
int main()
{
int n;
bool isprime=true;
cout<<"enter a  positive integer";
cin>>n;
if(n==0||n==1)
isprime=false;
else
for(int i=2;i<=n/2;i++)
{
if(n%i==0)
isprime=false;
break;
}

if(isprime)
cout<<n<<"is a prime number";
else 
cout<<n<<"is not a prime number";
return 0;
}
