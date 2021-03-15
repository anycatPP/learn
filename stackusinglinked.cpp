#include<iostream>
using namespace std;
struct node{
int data;
node *link;
}*top;
void push(int data)
{
node *temp=new node;
if(top==-1)
cout<<"stack underflow";
else
temp=top;
top=top->link;


int main(){
push(1);
push(34);
push(45);
pop();
print();
return 0;
}
