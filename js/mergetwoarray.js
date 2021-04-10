function merge(left,right)
{
var result=[];
var i=0,j=0;
while(i<left.length&&j<right.length)
{
if(right[j]>left[i])
{
result.push(left[i]);
i++;
}
else{
result.push(right[j]);
j++;
}
}
while(i<left.length)
{
result.push(left[i]);
i++;
}
while(j<right.length)
{
result.push(right[j]);
j++;
}
return result;
}
function mergeSort(arr)
{
if(arr.length<=1)
return arr;
var mid=Math.floor(arr.length/2);
var left=mergeSort((arr.slice(0,mid)));
var right=mergeSort((arr.slice(mid)));
return merge(left,right);
}
console.log(merge([99,232,13,4,51,4,1,3,1]));
