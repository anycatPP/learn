//transpose nikalo fir column ko rotate maar do
// 1 2 3		1 4 7				3 6 9
// 4 5 6 --> transpose 	2 5 8 --> reverse column --> 	2 5 8
// 7 8 9		3 6 9				1 4 7
#include<iostream>
#include <bits/stdc++.h>    
using namespace std;
#define I 3
#define J 3
int main()
{
	int mat[I][J];
	cout<<"enter array ";
	for(int i=0;i<I;i++)
	{
		for(int j=0;j<J;j++)
		{
			cin>>mat[i][j];
		}
	}
	
	for(int i=0;i<I;i++)
	{
		for(int j=i+1;j<J;j++)
		{
			swap(mat[i][j],mat[j][i]);
				}
	}
	for(int i=0;i<I;i++)
	{
		for(int j=0;j<J;j++)
		{
			cout<<mat[i][j]<<endl;
		}
	}
	for(int i=0;i<I;i++)
	{
		for(int j=0,k=I-1;j<k;j++,k--)
		{
			swap(mat[j][i],mat[k][i]);
		}
	}
	for(int i=0;i<I;i++)
	{
		for(int j=0;j<J;j++)
		{
			cout<<mat[i][j];
		}
	}
	return 0;
}	
