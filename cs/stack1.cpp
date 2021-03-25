#include<iostream>
using namespace std;
void showstack(stack<int>s)
{
while(!s.empty())
{
cout<<'\t'<<s.top();
s.pop();
}
cout<<'\n';
}

int main()
{
stack<int>s;
s.push(10);
s.push(20);
s.push(30);
s.push(40);
cout<<"the stack is ";
showstack(s);
return 0;
}

