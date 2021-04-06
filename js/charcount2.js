function charCount(str)
{
var obj={};
for(char of str)
{
char=char.toLowerCase();
if(/[a-z0-9]/.test(char))
{
obj[char]=++obj[char]||1;
}

}
return obj;
}
console.log(charCount("this is going to be fucking awesome"));

