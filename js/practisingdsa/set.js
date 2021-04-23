const mySet1=new Set();
mySet1.add(1);
mySet1.add(4);
mySet1.add(5);
mySet1.add(55);
mySet1.add('some text');
const o={a:1,b:2}
mySet1.add(o);
mySet1.add({a:1,b:2});
console.log(mySet1);
console.log(mySet1.has(5));
// iterating sets 
for(let item of mySet1)
console.log(item);
for(let item of mySet1.values())
console.log(item);
//mySet1.add(document.body);
//console.log(mySet1.has(document.querySelector('body')));
const mySet2=new Set([1,2,4,5])
console.log(mySet2.size)
console.log([...mySet2]);
const intersection= new Set([...mySet1].filter(x=>mySet2.has(x)))
const difference =new Set([...mySet1].filter(x=>!mySet2.has(x)));
mySet1.forEach(function(value){
                    console.log(value)
                    }
                    )
