function BFS(node)
{
let q=new Queue(this.nodes.length);
let explored=new Set();
q.enqueue(node);
add(node);
while(!q.isEmpty()){
let t=q.dequeue();
console.log(t);
this.edges[t].fitler(n=>!explored.has(n)).foreach(n=>!explored.add(n);
q.enqueue(n);
});
}

