/* 
BREADTH FIRST SEARCH
VISIT neighbor at current depth
1   this function should accept a starting vertex
2   create a queue (you can use an array) and place the starting vertex in it.
3   create an array to store the nodes visited
4   create an object to store nodes visite
5   mark the starting vertex as visited
6   loop as long as there is anything in the queue
7   remove the first vertex from the queue and push it into the array that stores nodes visited
8   loop over each vertex in the adjacency list for the vertex you are visiting
9   if it is not inside the object that stores nodes visited mark it as visited and enqueue that vertex
10  once you have finished looping return the array of visited nodes
*/
breadthFirst(start)
{
const queue=[start];
let currentVertex;
const result=[];
const visited={};
visited[start]=true;
while(queue.length)
{
currentVertex=queue.shift();
result.push(currentVertex);
this.adjacencyList[currentVertex].forEach(neighbor=>
                                    {
                                        if(!visited[neighbor])
                                        {
                                        visited[neighbor]=true;
                                        queue.push(neighbor);
                                        }
                                        });
                                        }
                                        return result;
                                        }

