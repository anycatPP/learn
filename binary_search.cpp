#include<iostream>
using namespace std;
int binarysearch(int arr[],int l,int r, int item)
{
if (r>=1)
{
	int mid=l+(r-l)/2;	//don't use mid=(l+r)/2 sum overflow https://www.geeksforgeeks.org/problem-binary-search-implementations/	
	if(arr[mid]==item)
		return mid;
	if(arr[mid]>item)
		return binarysearch(arr,l,mid-1,item);
	else 
		return binarysearch(arr,mid+1,r,item);
}
return -1;
}
int main()
{	
	int arr[]={2,3,4,5,6,7};
	for(int i:arr)
	{
		cout<<i;
	}
	cout<<endl;
	cout<<"searching for 5 in array"<<endl;
	int item=5;
	int n=sizeof(arr)/sizeof(arr[0]);
	int result = binarysearch(arr,0,n-1,item);
	(result==-1)?cout<<"element is not present":cout<<"element is present at "<<result;
	return 0;


}
