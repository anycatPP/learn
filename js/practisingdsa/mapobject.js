/* map is a collection of keyed data items, just like an object. But the main difference is that Map allows keys of any type.
methods and properties are:
new Map() creates the map
map.set(key,value) stores the value by the key
map.get(key) returns the value by the key, undefined if key doesn't exist in map
map.has(key) return true if the key exists false otherwise
map.delete(key) removes the value by the key
map.clear() removes everything from the map
map.size return the current element count
*/
let map= new Map();
map.set('1','str1');
map.set(1,'num1');
map.set(true,'bool1');
console.log(map.get(1));
console.log(map.get('1'));
console.log(map.size);

