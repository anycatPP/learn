#include<iostream>
using namespace std;
int search(int arr[],int n,int x)
{
int i;
for(i=0;i<n;i++)
if(arr[i]==x)
return i;
return -1;

}
int main(void)
{
int arr[]={2,3,5,67};
int x=5;
int n=sizeof(arr)/sizeof(arr[0]);
int result=search(arr,n,x);
(result==-1)?cout<<"element is not present in array":cout<<"element is present at index"<<result;
return 0;
}