class node{
constructor(val)
{
this.left=null;
this.right=null;
this.val=val;
}
}
class tree{
constructor()
{
this.root=null;
}
insert(val)
{
var newnode=new node(val);
if(!this.root)
{
this.root=newnode;
return this;
}
var current=this.root;
while(true)
{
if(val===current.val)
{
return;
}
if(val<current.val)
{
if(!current.left)
{
current.left=newnode;
return this;
}
else{
current=current.left;
}
}
else if(val>current.val)
{
if(!current.right)
{
current.right=newnode;
return this;
}
else
{
current=current.right;
}
}
}
}
find(val)
{
if(!this.root)
return;
if(this.root.val===val)
{
return true;
}
var found=false;
var current=this.root;
while(current&&!found)
{
if(val<current.val)
{
current=current.left;
}
else if(val>current.val)
{
current=current.right;
}
else
{
found=true;
}
}
if(!found)
return undefined;
return current;
}
/*
    Traversing
    Breadth first search
    Depth first search
                Inorder
                Preorder
                Postorder

BFS Iteratively using queue
create a queue (this can be array) and variable to store the value of nodes visited
place the root node in the queue 
loop as long as there is anything in the queue
dequeue  a node fromthe queue and push the value of the nodes into a variable that stores the nodes
if there is a left property on the node dequeued add it to the queue 
if there is a right property on the node dequeue add it to the queue
return the variable that stores the variable
*/
bfs(){
var data=[],queue=[],node=this.root;
queue.push(this.root);
while(queue.length)
{
node=queue.shift();
data.push(node.val);
if(node.left)
queue.push(node.left);
if(node.right)
queue.push(node.right);
}
return data;
}
dfsindepth()
{
/*
dfs preorder
create a variable to store the values of nodes visited
store the root of the BST in a variable called current
write a helper function which accepts a node
push the value of the node to the variable that stores the values
if the node has left property call the helper function with the left property on the node
if the node has right property call the helper function with the right property on the node
invoke the helper function with the current variable
return the array of values
*/
var data=[],current=this.root;
function dfs(current)
{
data.push(current.val);
if(current.left)
dfs(current.left);
if(current.right)
dfs(current.right);
}
dfs(current);
return data;
}}
var t=new tree();
t.insert(1);
t.insert(2);
t.insert(3);
console.log(t.bfs());
console.log(t.dfsindepth());
