#include<iostream>
#include<deque>
using namespace std;
void showdq(deque<int> g)
{
deque<int>::iterator it;
for(it=g.begin();it!=g.end();++it)
cout<<'\t'<<*it;
cout<<'\n';
}
int main()
{
deque<int> gquiz;

