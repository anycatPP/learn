#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main()
{
stack<int>s;
s.push(10);
s.push(29);
s.push(39);
s.push(50);
queue<int>queue;
int n;
cout<<"enter n means enter size";
cin>>n;
while(s.size()>n)
{
queue.push(s.top());
s.pop();
}
while(!queue.empty())
{
cout<<queue.front();
queue.pop();
}
return 0;
}


