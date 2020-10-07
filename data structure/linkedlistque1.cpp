#include<iostream>
using namespace std;
struct Node
{ int key; 
  Node *next;
  Node(int x)
  { key=x;
	  next=NULL;
  }

};
struct list {
	Node *head,*tail;
	list()
	{ head= NULL;
	}
	void insertAtBegin(int x)
	{
	Node *temp=new Node(x);
	temp->next=head;
	head=temp;
	if(tail=NULL)
	{
		tail=head;
	}
	}
	void print()
	{ 
		Node *temp=head;
		while(temp!=NULL)
		{
			cout<<(temp->key)<<" ";
			temp=temp->next;
		}
	}
};
int main()
{
	list l;
 	l.insertAtBegin(10);
	l.insertAtBegin(12);
	l.print();
	return 0;
}
