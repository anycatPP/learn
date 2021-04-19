var suming=function(l1,l2)
{
var sum=0,carry=0;
var nes=new link(-1);
var dummy=nes;
while(l1||l2||sum>0)
{
if(l1)
{
sum+=l1.val;
l1=l1.next;
}
if(l2)
{
sum+=l2.val;
l2=l2.next;
}
if(sum>10)
{
sum-=10;
carry=1;
}
dummy.next=new link(sum);
dummy=dummy.next;
sum=carry;
carry=0;
}
return nes.next;
}
