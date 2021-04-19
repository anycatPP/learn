var something=function(head,n)
{
let hare=head,curr=head;
while(n--)
{
hare=hare.next;
}
while(hare&&hare.next)
{
curr=curr.next;
hare=hare.next;
}
if(!hare)
head=head.next;
else
{
curr.next=curr.next?curr.next.next:null;
}
return head;
};
console.log(something(link,3));
class node{
constructor(val)
{
this.val=val;
this.next=null;
}
}
class linkedlist{
constructor(){
this.head=null;
this.tail=null;
this.length=0;
}
push(val)
{
var newnode=new node(val);
if(!this.head)
{
this.head=newnode;
this.tail=this.head;
}
else
{
this.tail.next=newnode;
this.tail=newnode;
}
this.length++;
return this;
}}
var link=new linkedlist();
link.push(4);
link.push(5);
link.push(9);
link.push(20);
link.push(24);
link.push(42);
link.push(52);
