function sum(arr,max)
{
var lo=0;
var hi=arr.length-1;
while(lo<hi)
{
if(arr[lo]+arr[hi]<max)
{
lo++;
}
else if(arr[lo]+arr[hi]>max)
{
hi--;
}
else
return [lo,hi];
}
return [-1,-1];
}
console.log(sum([1,2,3,4,5],9));
