//Hash that works on strings only
/* 
function hash(key,arrayLen)
{
let total=0;
for(let char of key)
{
let value=char.charCodeAt(0)-96;
total=(total+value)%arrayLen;
}
return total;
}
*/
//defining our hash (problem with our current hash)
//only hashes string (we don't worry about no's)
//not constant time linear in key length
//could be a little more random
function hash(key,arrayLen)
{
let total=0;
let WEIRD_PRIME=51;
for(let i=0;i<Math.min(key.length,100);i++)
{
let char=key[i];
let value=char.charCodeAt(0)-96;
total=((total*WEIRD_PRIME)+value)%arrayLen;
}
return total;
}
hash('what the fuck',11);

