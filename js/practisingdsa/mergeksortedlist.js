var mergeKLists=function(lists)
{
if(lists.length===0)
return null;
while(lists.length>1)
{
let a=lists.shift();
let b=lists.shift();
const h=merge(a,b);
lists.push(h);
}
return lists[0];
};
function merge(a,b)
{
const dummy=new listnode(0);
let temp=dummy;
while(a!==null&&b!==null)
{
if(a.val<b.val)
{
temp.next=a;
a=a.next;
}
else
{
temp.next=b;
b=b.next;
}
temp=temp.next;
}
:wq

