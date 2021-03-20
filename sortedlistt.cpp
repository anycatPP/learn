#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
void sortedInsert(struct node **,struct node*);
void insertionsort(stuct node **head_ref)
{ struct node* sorted=NULL;
