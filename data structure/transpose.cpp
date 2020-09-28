// 1 2 3 
// 4 5 6
// 7 8 9
// use swapping method o(1) space complexity
// diagonal wahi rahega 1 5 9 
// 2 -> 4 se swap
// 3 -> 7 se swap
// 6 -> 8 se swap
// 1 0 0
// 0 5 0
// 0 0 9 

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
