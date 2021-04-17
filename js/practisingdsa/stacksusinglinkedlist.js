class node{
constructor(value)
{
this.value=value;
this.next=null;
}
}
class stack{
constructor()
{
this.head=null;
this.tail=null;
this.length=0;
}
push(val)
{
var newItem=new node(val);
if(!this.head)
{
this.head=newItem;
this.tail=newItem;
}
else{
this.tail.next=newItem;
this.tail=newItem;
}
return ++this.length;
}
pop()
{
var temp=this.head;
if(!this.head)
return null;
if(this.head===this.tail)
this.head=null;
this.head=this.head.next;
this.length--;
return temp.value;
}
}
var s=new stack;
s.push(234);
s.push(345234);
s.push(0802);
s.pop();

console.log(s);
