function pathSum(root,sum)
{
var up=[];
var down=[];
helper(root,sum,up,down);
return down;
}
function helper(root,sum,up,down)
{
if(head===null)
return;
up.push(root.val);
if(root.left===null&&root.right===null&&sum===up)
down.push(up);
helper(head.left,sum-root.val,up,down);
helper(head,right,sum-root.val,up,down);
up.pop();
}
function tree(){

