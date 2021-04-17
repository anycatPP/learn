class hashtable{
constructor(size=53)
{
this.keyMap=new Array(size);
}
_hash(key)
{
let total=0;
let weird_prime=31;
for(let i=0;i<Math.min(key.length,100);i++)
{
let char=key[i];
let value=char.charCodeAt(0)-96;
total=(total*weird_prime+value)%this.keyMap.length;
}
return total;
}
set(key,value)
{
let index=this._hash(key);
if(!this.keyMap[index])
{
this.keyMap[index]=[];
}
this.keyMap[index].push([key,value]);
}
get(key)
{
let index=this._hash(key);
if(this.keyMap[index])
{
for(let i=0;i<this.keyMap[index].length;i++)
{
if(this.keyMap[index][i][0]===key)
{
return this.keyMap[index][i][1];
}
}
}
}
value()
{
let valueArr=[];
for(let i=0;i<this.keyMap.length;i++)
{
if(this.keyMap[i])
{
for(let j=0;j<this.keyMap[i].length;j++)
{
if(!valueArr.includes(this.keyMap[i][j][1]))
valueArr.push(this.keyMap[i][j][1]);
}
}
}
return valueArr;
}
keys()
{
let keyArr=[];
for(let i=0;i<this.keyMap.length;i++)
{
if(this.keyMap[i])
{
for(let j=0;j<this.keyMap[i].length;j++)
{
if(!keyArr.includes(this.keyMap[i][j][0]))
keyArr.push(this.keyMap[i][j][0]);
}
}
}
return keyArr;
}
}
var hash=new hashtable();
hash.set('name','aniket');
hash.get('name');
console.log(hash.value());
console.log(hash.keys());
