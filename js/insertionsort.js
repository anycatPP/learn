function insertionsort(arr)
{
for(var i=1;i<arr.length;i++)
{
var currentVal=arr[i];
for(var j=i-1;j>=0&&arr[j]>currentVal;j--)
{
arr[j+1]=arr[j];
}
arr[j+1]=currentVal;
}
return arr;
}
console.log(insertionsort([5,2,1,5,6,89]));

