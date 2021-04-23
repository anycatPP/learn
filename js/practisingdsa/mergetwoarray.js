function merging()
{
var a=[1,2,3,4,5],b=[9,8,7,6,5,4];
var add=[];
while(a.length!==0||b.length!==0)
{
let i=0,j=0;
if(a[i]<b[i])
{
add[j]=a[i];
j++;
i++;
}
else {
add[j]=b[i];
i++;
j++;
}
}
add=a||b;
console.log(add);
}
merging();

