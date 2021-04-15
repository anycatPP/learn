class node{
constructor(val){
this.val=val;
this.next=null;
}
}
class singlylinkedlist{
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
else{
this.tail.next=newnode;
this.tail=newnode;
}
this.length++;
}
pop()
{
if(!this.head)
return undefined;
if(this.length===1)
{
this.head=null;
this.tail=null;
return this.head;
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
return current;
}
/*
shifting    remove a new node from the beginning of the linked list
1 if there are no nodes return undefined
2 store the current head property in a variable
3 set the head property to b ethe current head next property
4 decrement the length by 1
5 return the value of the node removed
*/

}
var single=new singlylinkedlist;
single.push(234);
single.push(234234);
single.push(23423423);
console.log(single);
console.log(`some space`);

console.log(single.pop());
