function naiveSearch(long,short)
{
var count=0;
for(var i=0;i<long.length;i++)
{
for(var j=0;i<short.length;j++)
{
if(short[j]!==long[i+j])
break;


if(j===short.length-1)
count++;

}
}
return count;
}
var something=naiveSearch('what is what','what');
console.log(something);
