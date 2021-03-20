#include<iostream>
using namespace std;
struct node{
int data;
struct node* next;
};
void sortedinsert(struct node** , struct node*);
void insertionsort(struct node **head_ref)
{
struct node *sorted=NULL;
struct node *current=*head_ref;
while(current!=NULL)
{
struct node *next=current->next;
sortedinsert(&sorted,current);
current=next;
}
*head_ref=sorted;
}
void sortedinsert(struct node** head_ref,struct node* new_node)
{
struct node* current;
if(*head_ref==NULL||(*head_ref)->data>=
