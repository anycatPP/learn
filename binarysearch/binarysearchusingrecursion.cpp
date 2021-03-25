#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int lo,int hi,int x)
{
while(lo<=hi)
{
int mid=lo+(hi-lo)/2;
if(arr[mid]==x)
return mid;
if(arr[mid]<x)
return binarysearch(arr,mid+1,hi,x);
return binarysearch(arr,lo,mid-1,x);
}
return -1;
}
int main(){
int arr[]={1,5,6,7};
int n=sizeof(arr)/sizeof(arr[0]);
int x=7;
int result=binarysearch(arr,0,n-1,x);
(result==-1)?cout<<"Element not found":cout<<"Element found at index"<<result;
return 0;
}
