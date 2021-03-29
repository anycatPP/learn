try{
let a=undefinedVariable
}
catch(e)
{
console.log(e instanceof RefernceError)
console.log(e.message)
console.log(e.name)
console.log(e.filename)
console.log(e.linenumber)
console.log(e.columnNumber)
console.log(e.stack)
}
