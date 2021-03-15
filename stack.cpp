#include<iostream>
using namespace std;
#define SIZE 10
int stack[SIZE];
int top=-1;
void push(int data)
{
if(top==SIZE-1)
cout<<"already fulled stack"<<endl;
else
top++;
stack[top]=data;
cout<<"insertion successufull"<<endl;
}
void pop()
{
if(top==-1)
cout<<"already empty "<<endl;
else
cout<<"deleted element is "<<stack[top];
top--;
}

void print()
{
if(top==-1)
cout<<"stack is empty";
else
{
for(int i=top;i>=0;i--)
cout<<stack[i]<<endl;
}
}
int main(){
push(2343);
push(243);
push(2);
pop();
print();


return 0;
}
