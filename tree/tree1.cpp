#include<iostream>
using namespace std;

struct node{
int data;
node* right;
node* left;
node(int val)
{
data=val;
left=NULL;
right=NULL;
}};
void print(node *head)
{
node *temp=head;
if(temp==NULL)
return;
else 
print(temp->left);
cout<<temp->data;
print(temp->right);
}

int main(){
node *root=new node(2);
root->left=new node(3);
root->right=new node(5);
print(root);
return 0;
}
