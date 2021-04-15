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
this.length++;
}
this.tail.next=newnode;
this.tail=newnode;
this.length++;
}
secondLastNode(){
let secondLast;
let last=this.head;
while(last.next)
{
secondLast=last;
last =last.next;
}
return secondLast;
}
pop(){
if(!this.head){
return null;
}

var something=new singlylinkedlist;
something.push(111);
something.push(2343);
something.push(34345345);
console.log(something.head.next);

