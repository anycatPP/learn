#include<iostream>
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
	cout<<"Normal array: "<<endl;
	for(int i=0;i<I;i++)
	{
		for(int j=0;j<J;j++)
		{
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Snake array"<<endl;
	for(int i=0;i<I;i++)
	{
		if(i%2==0)
		{
			for(int j=0;j<J;j++)
			{
				cout<<mat[i][j]<<" ";
			
			}
		}
			else
			{
				for(int j=J-1;j>=0;j--)
				{
					cout<<mat[i][j]<<" ";
				}
			

			}
			cout<<endl;
	}
	return 0;
}
