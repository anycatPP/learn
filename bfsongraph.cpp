#include<iostream>
#include<list>
using namespace std;
class graph{
int v;
list<int>*adj;
public:
graph(int v);
void addedge(int v,int w);
void bfs(int s);
};
graph::graph(int v)
{
this->v=v;
adj=new list<int>[v];
}
void graph::addedge(int v,int w)
{
adj[v].push_back(w);
}
void graph::bfs(int s)
{
bool *visisted=new bool[v];
for(int i=0;i<v;i++)
visited[i]=false;
list<int>queue;



