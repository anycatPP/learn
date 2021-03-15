#include<iostream>
using namespace std;
node* levelordertraversal(node *head,int data){
if(head==NULL)
{
root=createNode(data);
return head;
}
queue<node*>q;
q.push(root);
