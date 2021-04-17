graphs can be implemented by usign adjacency matrix
or can be made usign adjacency list
In js we'll be using object for adjacency list
adjacency list
{
A:["B","F"],
B:["A","C"],
C:["B","D"],
D:["C","E"],
E:["D","F"],
F:["E","A"]
}

differences and Big O
|v| number of vertices
|E| number of edges
operation   adjacency list  adjacency matrix
add vertex  O(1)                o(V^2)
add edge    O(1)                O(1)
remove vertex   O(|v|+|E|)      O(|v^2|)
remove edge     O(|E|)          O(1)
query           O(|v|+|E|)      O(1)
storage         O(|v|+|E|)      O(|v^2|)

