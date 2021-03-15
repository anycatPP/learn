#include<iostream>
#include<stack>
using namespace std;
int main()
{
int sum=0;
stack<int>my;
my.push(1);
my.push(2);
my.push(3);
my.push(5);
while(!my.empty())
{
sum=sum+my.top();
my.pop();
}
cout<<sum;
return 0;
}
