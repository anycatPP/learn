#include<iostream>
#include<stack>
using namespace std;
int main()
{
int sum=0;
stack<int>m;
m.push(1);
m.push(2);
m.push(5);
m.push(555);
while(m.size()>0)
{
sum=sum+m.top();
m.pop();
}
cout<<sum;
return 0;
}
