#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main()
{
queue<int>q;
q.push(-10);
q.push(-20);
q.push(50);
q.push(50);
q.push(-60);
int n=q.size();
stack<int>s;
for(int i=0;i<n;i++)
{
if(q.front()<0)
{
s.push(q.front());
q.pop();
}
else
{
q.push(q.front());
q.pop();
}
}
int m=q.size();
while(!s.empty())
{
q.push(s.top());
s.pop();
}
for(int i=0;i<m;i++)
{
q.push(q.front());
q.pop();
}
while(!s.empty())
{
cout<<s.top();
s.pop();
}

while(!q.empty()){
cout<<q.front();
q.pop();
}



}
