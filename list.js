function listnode(val)
{
this.val=val;
this.next=null;
}
let res=new listnode(-1);
res.next=2;
res.next.next=4;
console.log(res);
console.log(res.next);

