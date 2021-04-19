function something(head)
{
var dummy=new listNode(0);
dummy.next=head;
tummy=dummy.next;
var count=-1;
var sum=0;
if(head.length<=30||head.val===0||head.val===1)
{
while(tummy)
{
count++;
tummy=tummy.next;
}
while(count>0)
{
sum+=head.val*2^count;
tummy=tummy.next;
count--;
}
return sum;
}
return 0;
}


