#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
struct node* left;
struct node* right;
};
struct node* newnode(int data)
{
struct node* node=(struct node*)malloc(sizeof(struct node));
node->data=data;
node->left=NULL;
node->right=NULL;
return(node);
}
void mirror(struct node* node)
{
if(node==NULL)
return;
else
{
struct node* temp;
mirror(node->left);
mirror(node->right);
temp=node->left;
node->left=node->right;
node->right=temp;
}
}
void inorder(struct node* node)
{
if(node==NULL)
return;
inorder(node->left);
cout<<node->data<<" ";
inorder(node->right);
}


