class node{
constructor(val,priority)
{
this.val=val;
this.priority=priority;
}
}
class priorityqueue{
constructor()
{
this.value=[];
}
enqueue(val,priority)
{
let newnode=new node(val,priority);
this.value.push(newnode);
this.bubbleup();
}
bubbleup()
{
let idx=this.value.length-1;
const element=this.value[idx];
while(idx>0)
{
let parentIdx=Math.floor((idx-1)/2);
let parent=this.value[parentIdx];
if(element.priority<=parent.priority)
break;
this.value[parentIdx]=element;
this.value[idx]=parent;
idx=parentIdx;
}
}
dequeue()
{
    const max=this.value[0];
    const end=this.value.pop();
    if(this.value.length>0)
    {
    this.value[0]=end;
    this.sinkdown();
    }
    return max;
}
sinkdown()
{
let idx=0;
const length=this.value.length;
const element=this.value[0];
while(true)
{
let leftchildidx=2*idx+1;
let rightchildidx=2*idx+2;
let leftchild,rightchild;
let swap=null;
    if(leftchildidx<length)
    {
    leftchild=this.value[leftchildidx];
    if(leftchild.priority>element.priority)
    {
    swap=leftchildidx;
    }
    }
    if(rightchildidx<length)
    {
    rightchild=this.value[rightchildidx];
    if((swap===null&&rightchild.priority>element.priority)||(swap!==null&&rightchild.priority>leftchild.priority))
    swap=rightchildidx;
    }
    if(swap===null)
    break;
    this.value[idx]=this.value[swap];
    this.value[swap]=element;
    idx=swap;
    }
    }
}

var pri=new priorityqueue();
pri.enqueue(234);
pri.enqueue(5234);
pri.enqueue(89234);
pri.dequeue();
console.log(pri);
