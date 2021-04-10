function bubbleSort(arr)
{
var noswaps;
for(let i=arr.length-1;i>0;i--)
{
noswap=true;
for(let j=0;j<i-1;j++)
{
if(arr[j]>arr[j+1])
{
var temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
noswap=false;
}

}
if(noswap)break;
}
return arr;
}
console.log(bubbleSort([5,2,4,1,7]));


