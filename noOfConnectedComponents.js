function connectedComponent(n,edge)
{
 
var adj=new Map();//making adjacency list using hashmap or hashtable or associative array 
function addVertex(n)
{
for(var i=1;i<=n;i++)
{                           // adding vertex to adjacency list or adding key to map in adj hashmap  then adding list to it using [] this 
                            /* 
                            {
                            1:[],
                            3:[],
                            2:[],
                            4:[],
                            5:[]
                           }
                            */
adj.set(i,[]);
}
}
addVertex(n);

function addEdge(origin,destination)
{                                  /* adding edge in graph means 
                                    adding value in key of hashmap
                                    {
                                    1:[2,3],
                                    2:[4,5],
                                    5:[8,9]
                                    }
                                    */
   console.log(adj.get());                                 
//adj.get(origin).push(destination);
//adj.get(destination).push(origin);
}
edge.forEach(connection=>addEdge(...connection));
console.log(adj);
}
var edge=[[2,1],[3,1],[1,3],[1,4]
         ,[2,4]
         ];
connectedComponent(5,edge);

