#include<iostream>
#include<stack>
#include<queue>
#include<string>
using namespace std;
bool isoperator(char x)
{
switch(x)
{
case '+':
case '-':
case '/':
case '*':
return true;
}
return false;
}
int main()
{
string post_exp="ABC/-AK/L-*";
cout<<"prefix"<<posttopre(post_exp);
return 0;
}
string posttopre(string p)
{
stack<string>s;
int l=p.size();
for(int i=0;i<l;i++)
{
if(isoperator(p[i])
{
string op1=s.top();
s.pop();
string op2=s.top();
s.pop();
string temp=p[i]+op1+op2;
s.push(temp);
}
else
{
s.push(string(1,p[i]));
}
}
string ans="";
while(!s.empty())
{
ans+=s.top();
s.pop();
}
return ans;
}


