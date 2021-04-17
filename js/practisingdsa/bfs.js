bfs()
{
var queue=[],data=[],node=this.root;
queue.push(node);
while(queue.length)
{
node=queue.shift();
data.push(node.val);
if(node.left)
node=node.left;
if(node.right)
node=node.right;
}
return data;
}
