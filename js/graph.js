class graph{
constructor(){
this.adjacencyList={};
addVertex(vertex)
{
if(!this.adjacencyList[vertex])
{
this.adjacencyList[vertex]=[];
}

