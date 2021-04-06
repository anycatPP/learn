let dwarves=['not','someone','any','without','brain'];
dwarves.forEach(function(item,index,array){
if(item==='not')
item=item.toUpperCase();
else
item=item.toLowerCase();
console.log(index,item);
});
