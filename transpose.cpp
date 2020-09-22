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
			cout<<mat[i][j];
		}
	}
	return 0;
}
