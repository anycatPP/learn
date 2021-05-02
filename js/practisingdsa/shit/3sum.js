// 1,2,4,5,12
function sum(arr,total)
{
for(let i=0;i<=arr.length;i++)
{
total=total-arr[i];
var lo=i+1;
var hi=arr.length-1;
while(lo<hi)
{
if(arr[lo]+arr[hi]<total)
lo++;
else if(arr[lo]+arr[hi]>total)
hi--;
else
return [i,lo,hi];
}
}
return [-1,-1,-1];
}
console.log(sum([1,2,4,5,12],11));
