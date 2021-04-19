var something=function(list)
{
return divide(list,0,list.length-1);
}
function divide(list,lo,high);
{
if(lo===high)
return list[lo];
else if(lo<high)
{
var mid=parseInt((lo+high)/2);
var left=divide(list,lo,mid);
var right=divide(list,mid+1,high);
return merge(left,right);
}
return 0;
}
function merge(left,right)
{
if(!left)
return right;
if(!right)
return left;
else if(left.val<right.val)
{
left.next=merge(left.next,right);
return left;
}
else{
right.next=merge(left,right.next);
return right;
}
}

