#include<iostream>
using namespace std;
int main()
{ 
	int arr[5];
	cout<<"enter an array";
	for(int i=0;i<5;i++)
	cin>>arr[i];
	int n=sizeof(arr)/sizeof(int);
	int low =0, high=n-1;
	while(low<high)
	{ 
		swap(arr[low],arr[high]);
		low++;
		high--;
	}
	for(int i=0;i<5;i++)
		cout<<arr[i];

return 0;
}
