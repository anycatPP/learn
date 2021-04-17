class graph{
constructor(){
this.adjacencylist={};
addvertex(vertex)
{
if(!this.adjacencylist[vertex])
this.adjacencylist[vertex]=[];
}
addEdge(v1,v2)
{
this.adjacencyList=[v1].push(v2);
this.adjacencyList[v2].push(v1);
}
removeEdge(vertex1,vertex2)
{
this.adjacencyList[vertex1]=this.adjacencyList[vertex1].filter(v=>v!==vertex2);
this.adjacencyList[vertex2]=this.adjacencyList[vertex2].filter(v=>v!==vertex1);
}
removeVertex(vertex)
{
/* the function should accept a vertex to remove
    the function should loop as long as there are any other vertices in the adjacency list for that vertex
    inside of the loop call our removeEdge function with the vertex we are removing and any values in the adjacency list for that vertex
    delete the key in the adjacencyList for that vertex
    */
while(this.adjacencyList[vertex].length)
{
const adjacentVertex=this.adjacencyList[vertex].pop();
this.removeEdge(vertex,adjacentVertex);
}
delete this.adjacencyList[vertex];
}
/* 
dfs recursive 
dfs(vertex)
    the function should accept a starting node
    create a list to store the end result to be returned at the very end
    created an object to store visited vertices 
    create a helper function which accepts a vertex
        the helper function should return early if the vertex is empty 
        the helper function should place the vertex it accepts into the visited object and push that vertex into the result array
        loop over all of the values in the adjacencyList for that vertex
        if any of those values have not been visited recursively invoeke the helper function with that vertex
        invoke the helper function with the starting vertex 
        return the result array
*/
depthFirstRecursive(start)
{
const result=[];
const visited={};
const adjacencyList=this.adjacencyList;
(function dfs(vertex)
{
if(!vertex)
{
return null;
}
visited[vertex]=true;
result.push(vertex);
adjacencyList[vertex].forEach(neighbor=> {   if(!visited[neighbor]) return dfs(neighbor); });
})(start);
return result;
}
/* dfs iterative
    the function should accept a starting node
    create a stack to help use keep track of vertices (use a list/array)
    create a list to store the end result to be returned at the very end
    create a object to store visited vertices 
    add the starting vertex to stack and mark it visited
    while the stack has something in it
            pop the next vertex from the stack 
            if that vertex hasn't been visited yet
                mark it as visited
                add it to result list 
                push all of its neighbors into the stack
    return the result array
*/
depthFirstIterative(start)
{
const result=[];
const visited={};
const stack=[start];
visited[start]=true;
let currentVertex;
while(stack.length)
{
currentVertex=stack.pop();
result.push(currentVertex);
this.adjacencyList[current_vertex].forEach(neighbor=>{ 
                                    if(!visited[neighbor])
                                    {
                                    visited[neighbor]=true; 
                                    stack.push(neighbor);
                                    }
                                    });
                                    return result;
                                    }
                                    }




