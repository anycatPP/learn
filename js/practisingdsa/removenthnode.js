function tail(head)
{
var dummy=new newNode(0);
dummy.next=head;
newNode runner=dummy;
newNode walker=dummy;
for(var i=1;i<=n+1;i++)
{
runner=runner.next;
}
while(runner!=null)
{
runner=runner.next;
walker=walker.next;
}
walker.next=walker.next.next;
return dummy.next;
}

