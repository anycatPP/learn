var mergetwolist=function(l1,l2)
{
var mergelist={ 
                val:-1,
                next:null
                };
var crt=mergelist;
while(l1&&l2)
{
if(l1.val>l2.val)
{
crt.next=l2;
l2=l2.next;
}
else
{
crt.next=l1;
l1=l1.next;
}}
crt.next=l1||l2;
return mergelist.next;
};

console.log(mergetwolist);
