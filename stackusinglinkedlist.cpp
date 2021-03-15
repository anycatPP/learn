#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
node *link;
}*top=NULL;
 
void push(int data)
{
node *temp=new node();
if(!temp)
{
cout<<"heap overflow";
exit(1);
}
temp->data=data;
temp->link=top;
top=temp;
}
int isEmpty(){
return top==NULL;
}
int peek(){
if(!isEmpty())
return top->data;
else 
exit(1);
}
void pop()
{
node *temp=new node;
if(top==NULL)
{
cout<<"stack underflow"<<endl;
exit(1);
}
else{
temp=top;
top=top->link;
delete top;
}
}
void display(){
node *temp;
if(top==NULL)
{
cout<<"stack underflow";
exit(1);
}
else {
temp=top;
while(temp!=NULL)
{
cout<<temp->data;
temp=temp->link;
}
}
}











int main()
{
push(11);
push(22);
push(33);
push(44);
display();
cout<<"\nTop element is"<<peek()<<endl;
pop();
pop();
display();
cout<<"Top element is "<<peek()<<endl;
return 0;
}
