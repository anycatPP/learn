#include<iostream>
using namespace std;
int main(){
int mat[][3]={{1,2,3},
                {4,5,6},
                {7,8,9}};
int k;
cout<<"enter element to be searched";
cin>>k;
int rows=sizeof(mat)/sizeof(mat[0]);
int col=sizeof(mat[0])/sizeof(mat[0][0]);
for(int i=0;i<rows;i++)
{
for(int j=0;j<col;j++)
{
if(mat[i][j]==k)
{
cout<<i+1<<j+1;
}
}
}
return 0;
}
