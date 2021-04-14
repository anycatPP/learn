class node{
constructor(val)
{
this.val=val;
this.next=null;
}
}
class singlylinkedlist{
constructor(){
this.length=0;
this.head=null;
this.tail=null;
}
push(val)
{
var newnode=new node(val);
if(!this.head)
{
this.head=newnode;
this.tail=this.head;
}
else{
this.tail.next=newnode;
this.tail=newnode;
}
this.length++;
return this;
}
pop(){
if(!this.head){
return undefined;
}
var current=this.head;
var newTail=current;
while(current.next)
{
newTail=current;
current=current.next;
}
this.tail=newTail;
this.tail.next=null;
this.length--;
if(this.length===0)
{
this.head=null;
this.tail=null;
}
return current;
}
//shifting
//remove a new node from the beginning of the linked list
//pseudocode
//if there are no nodes return undefined
//store the current head property in a variable
//set the head property to be the current head's next property
//decrement the length by 1
//return the value of the node removed
shift()
{
if(!this.head)
return undefined;
var currentHead=this.head;
this.head=currentHead.next;
this.length--;
if(this.length===0)
this.tail=null;
return currentHead;
}
//unshifting
//add a new node to the beginning of the linked list
/* this function should accept a value
create a new node using the value passed to the function
If there is no head property on the list set the head an dtail to be the newly created node.
otherwise set the newly created node's next property to be the current head property on the list
set the head property on the list to be that newly created node
increament the length of the list by 1
return the linked list
*/
unshifting(val)
{
var newnode=new node(val);
if(!this.head)
{
this.head=newnode;
this.tail=this.head;
}
else{
newnode.next=this.head;
this.head=newnode;
this.length++;
return this;
}
}
}
/*
get     retrieving a node by its position in the linked list
this function should accept an index
if the index is less than zero or greater than or equal to the length of the list return null
loop through the list until you reach the index and return the node at that specific index

*/
get(index)
{
if(index<0||index>=this.length)
return null;
var counter=0;
var current=this.head;
while(counter!=index)
{
current=current.next;
counter++;
}
return current;
}
/*
set changing the value of a node based on its position in the linked list
this funnction should accept a value and an index
use your get function to find the specific node
if the node is not found return false
if the node is found set the value of that node to be the value passed to the function and return true

*/
set(val,index)
{
var foundnode=this.get(index);
if(foundnode)
{
foundnode.val=val;
return true;
}
return false;
}
/*
insert  adding a node to the linked list at a specific position
if the linked list is less than zero or greater  than the length return false
if the index is same as length push a new node to the end of the list
if the index is 0 unshift a new node to the start of the list
otherwise using the get method access the node at the index-1
set the next property on that node to be the new node
set the next property on the new node to be the previous next
increament the length
return true
*/
insert(index,val)
{
if(index<0

*/




















var something=new singlylinkedlist;
something.push(111);
something.push(233);
something.push(3234);
console.log(something.shift());
something.unshifting(111);
console.log(something);
