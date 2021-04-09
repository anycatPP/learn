const myTodos=['buy bread','go to gym','record youtube videos'];
console.log(myTodos[myTodos.indexOf('buy bread')]);
const newTodos=[{
title:'buy bread',
isDone:false,
},{
title:'go to gym',
isDone:false,
},{
title:'recored youtube videos',
isDone:true,
}];

const index=newTodos.findIndex(function(todo,index){
return todo.title==='go to gym'
})
