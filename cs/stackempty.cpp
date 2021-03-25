#include<iostream>
#include<stack>
using namespace std;
int main()
{
stack<int>mystack;
mystack.push(1);
if(mystack.empty())
{
cout<<"true";
}
else
{
cout<<"false";
}
return 0;
}
