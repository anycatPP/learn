#include<iostream>
using namespace std;
struct node{
int data;
node *next;
};
class linkedlist{
private: 
node *head,*tail;
public:
linkedlist()
{
head=NULL;
tail=NULL;
}
void addnode(int n)
{
node *tmp=new node;
tmp->data=n;
tmp->next=NULL;
if(head==NULL)
{
head=tmp;
tail=tmp;
}
else{
tail->next=tmp;
tail=tail->next;
}


};
int main()
{
linkedlist a;
a.addnode(1);
a.addnode(2);
return 0;
}
