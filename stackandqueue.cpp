#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void reorder(queue<int>&q)
{
stack<int>s;
int n=q.size();
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
while(!q.empty())
{
cout<<q.front();
q.pop();
}
}
int main(){
queue<int> a;
a.push(10);
a.push(20);
a.push(30);
reorder(a);
return 0;
}
