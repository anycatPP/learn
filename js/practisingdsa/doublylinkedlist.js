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
var foundnode=this.get(index);
if(foundnode!=null)
{
foundnode.val=val;
return true;
}
return false;
}
insert(index,val)
{
/*
if the index is less than zero or greater than or equal to the length return false
if the index is 0 unshift
if the index is the same as the length push
use the get method to access the index-1
set the next & prev properties on the corrent notes to link everything together
increment the length
return true
*/
if(index<0||index>this.length)
return false;
if(index===0)
return !!this.unshift(val);
if(index===this.length)
return !!this.push(val);
var newnode=new node(val);
var previousnode=this.get(index-1);
afternode=previousnode.next;
previousnode.next=newnode;
newnode.prev=previousnode;
newnode.next=afternode;
afternode.prev=newnode;
this.length++;
return true;
}
remove(index)
{
/* if the index is less than zero or greater than or equal to the length return undefined
if the index is 0 shift
if the index is t he same as the length-1 pop
use the get method to retrieve the item to be removed
update the next and prev properties to remove the found node from the list
set the next and prev to null on the found node
decrement the length
return the removed node
*/
if(index<0||index>this.length)
return undefined;
if(index===0)
return this.shift();
if(index===this.length-1)
return this.pop();
var removednode=this.get(index);
var after=removenode.next;
var before=removenode.prev;
before.next=after;
after.prev=before;
removenode.next=null;
removenode.prev=null;
this.length--;
return removenode;
}
}
var dos=new doublylinkedlist;
dos.push(234);
dos.push(345345);
dos.push(19325);
dos.push(92347);
dos.pop();
console.log(dos);
