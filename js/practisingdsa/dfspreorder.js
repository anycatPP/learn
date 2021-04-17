dfs()
{
var data=[],current=this.root;
function d(node)
{
data.push(node.val);
if(node.left)
d(node.left);
if(node.right)
d(node.right);
}
d(current);
return data;
}
/* dfs using postorder */
dfs()
{
var data=[],current=this.root;
function d(node)
{
if(node.left)
d(node.left);
if(node.right)
d(node.right);
data.push(node.val);
}
d(current);
return data;
}
dfs(){
/* dfs using inorder */
var data=[],current=this.root;
function d(node)
{
node.left&&d(node.left);
data.push(node.val);
node.right&&d(node.right);
}
d(current);
return data;
}

