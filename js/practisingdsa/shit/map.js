let map={};
var arr=[2,4,5,633,7,72];
map[arr[3]]=1; // {'633':1}
map[arr[3]]++; //its changing value of map { '633':2 } will be the output but key will be in string
console.log(map);
console.log(map[arr[3]]>3);
console.log(map.keys());

