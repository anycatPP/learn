#include<bits/stdc++.h>
using namespace std;
int main(){
string str="nitin";
allpalpartition(str);
return 0;
}
void allpalpartition(string str)
{
int n=str.length();
vector<vector<string> > allpart;
vector<string>currpart;
//call recursive function to generate all partitions and stroe in allpart
for(int i=0;i<allpart.size();i++)
{
for(int j=0;j<allpart[i].size();j++)
cout<<allpart[i][j]<<" ";
cout<<"\n";
}
}
void allpalpartition(vector<vector<string> >&allpart,vector<string>int start,int n ,string str)
{
if(start>=len)
{
allpart.push_back(currpart);
return;
}
for(int i=start;i<n;i++)
{
if(ispalindrome(str,start,i))
{


