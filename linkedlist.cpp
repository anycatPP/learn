#include<iostream>
using namespace std;
struct node{
int data;
struct node* next;
};
void printmiddle(struct node *head)
{
struct node *slow_ptr=head;
struct node *fast_ptr=head;
if(head!=NULL)
{
while(fast_ptr!=NULL && fast_ptr->next!=NULL)

