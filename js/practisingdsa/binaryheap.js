class minbinaryheap
{
constructor()
{
this.value=[];
}
insert(val)
{
/* 
push the value into the values property on the heap
bubble the value up to its correct spot
create a variable called index which is the length of the values property-1
create a variable called parentIndex which is the floor of (index-1)/2
keep looping as logn as the values elements at the parentIndex is less than the values element at the child index
swap the value of the values element at the parentIndex with the value of the element property at the child index
set the index to be the parentIndex and start over
*/
this.value.push(val);
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
if(element<parent)
break;
else{
this.value[parentIdx]=element;
this.value[idx]=parent;
idx=parentIdx;
}
}
}
/*
removing (also called extractmax)
swap the fist value in the values property with the last one
pop form the values property so you can return the value at the end
have the new root "sink down" to th correct spot
your paernt index start at 0 (the root)
find the index of left child :2*index+1;(make sure its not out of bound)
find the index of right child 2*index+2 (make sure its not out of bound)
if the left or right child is greater than the element swap if both left and right children are larger swap with the largest child
the child index you swapped to now becomes the new parent index
keep looping and swapping until neither child is larger than the element
return the old root
*/
remove()
{
const top=this.value[0];
const end=this.value.pop();
if(this.value.length>0)
{
this.value[0]=end;
this.sinkdown();
return top;
}
}
sinkdown()
{
let idx=0;
const length=this.value.length;
const element=this.value[0];
while(true)
{
let leftChildIdx=2*idx+1;
let rightChildIdx=2*idx+2;
let leftChild,rightChild;
let swap=null;
  //
  if(leftChildIdx<length)
    {
    leftChild=this.value[leftChildIdx];
        if(leftChild>element)
        {
        swap=leftChildIdx;
        }
    }
    
//
    if(rightChildIdx<length)
    {
    rightChild=this.value[rightChildIdx];
        if(swap===null&&rightChild>elment||swap!==null&&rightChild>leftChild)
        {
        swap=rightChildIdx;
        }
    }
    //
    if(swap===null)
        break;
        this.value[idx]=this.value[swap];
        this.value[swap]=element;
        idx=swap;
    }
    }   




}
var heap=new minbinaryheap();
heap.insert(234);
heap.insert(5345);
heap.remove()
console.log(heap);
