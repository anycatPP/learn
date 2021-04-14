if there are no nodes in the list return undefined
loop through the list until you reach the tail
set the next property  of the 2nd to the last node to be null
set the tail to be the 2nd to last node
decrement the length of hte list by 1
reutrn the value of the node removed
pop()
{
if(!this.head)
{
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
return current;
}
