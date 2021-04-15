class node{
constructor(val)
{
this.val=val;
this.next=null;
this.prev=null;
}
}
class doublylinkedlist{
constructor()
{
this.head=null;
this.tail=null;
this.length=0;
}
push(val)
{
var newnode=new node(val);
if(this.length===0)
{
this.head=newnode;
this.tail=newnode;
}
else
{
this.tail.next=newnode;
newnode.prev=this.tail;
this.tail=newnode;
}
this.length++;
return this;
}
pop(){
if(!this.head)
return undefined;
var poppednode=this.tail;
if(this.length===1)
{
this.head=null;
this.tail=null;
}
else{
this.tail=poppednode.prev;
this.tail.next=null;
poppednode.prev=null;
}
this.length--;
return poppednode;
}
shifting(){
if(!this.head)
{
return undefined;
}
if(this.length===1)
{
this.head=null;
this.tail=null;
}
else
{
var oldhead=this.head;
this.head=this.head.next;
this.head.prev=null;
oldhead.next=null;
this.length--;
return oldhead;
}
}
unshifting(val)
{
var newnode=new node(val);
if(!this.head)
{
this.head=newnode;
this.tail=newnode;
}
else{
var oldhead=this.head;
oldhead.prev=newnode;
newnode.next=oldhead;
this.head=newnode;
}
this.length++;
return this;
}
get(index)
{
/* if the index is less htan 0 or greater or equal to the length return null
-if the index is less than or equal to half the length of hte list 
-loop through the list starting from head and loop towards the middle 
-return the node once it is found
-if the index is greater than half the length of the list
-loop through the list starting form the tail and loop towards the middle 
-return the node once it is found
*/
if(index<0||index>=this.length)
return null;
if(index<=this.length/2)
{
var count=0;
var current=this.head;
while(count!=index)
{
current=current.next;
count++;
}
}
else
{
var count=this.length-1;
var current=this.tail;
while(count!=index)
{
current=current.prev;
count--;
}
}
return current;
}
set(index,val){
if(index<0||index>=this.length)
return null;
var current=this.head;
while(current)
{
current=current.next;
if(current.length===index)
{
current.val=val;
}
}
}
}


}
var dos=new doublylinkedlist;
dos.push(234);
dos.push(345345);
console.log(dos);
