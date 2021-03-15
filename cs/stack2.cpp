#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main()
{
stack<int>s;
s.push(10);
s.push(20);
s.push(30);
s.push(50);
stack<int>s1;
queue<int>q;
while(!s.empty())
{
int element=s.top();
if(element%2==0)
{
q.push(element);
}
}
while(!s1.empty())
{
cout<<s1.top();
s1.pop();
}
while(!q.empty())
{
cout<<q.front();
q.pop();
}
return 0;
}
