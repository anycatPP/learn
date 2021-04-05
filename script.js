const fetch=require("node-fetch");
console.log('hello');
console.log(fetch('https://reqres.in/api/users'))
.then(res=>console.log(res))

