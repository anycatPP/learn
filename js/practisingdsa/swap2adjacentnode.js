function list(head)
{
var dummy=new listnode(0);
dummy.next=head;
var current=dummy;
while(current&&current.next)
{
var node1=current.next;
var node2=current.next.next;
current.next=node1;
current.next.next2=node2;
current=current.next.next;
}
}
return dummy.next;
}
