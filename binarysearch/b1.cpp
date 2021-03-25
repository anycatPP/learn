#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int lo,int hi,int x)
{
while(lo<=hi){
int mid=lo+(hi-lo)/2;
if(arr[mid]==x)
return mid;
if(arr[mid]<x)
lo=mid+1;
hi=mid-1;
}
return -1;
}

int main()
{
int arr[]={2,5,6,7};
int n=sizeof(arr)/sizeof(arr[0]);
int x=5;
int result=binarysearch(arr,0,n-1,x);
(result==-1)?cout<<"Element is not found":cout<<"Element is found at"<<result;
return 0;
}

