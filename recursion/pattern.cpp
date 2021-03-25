#include<iostream>
using namespace std;
void fun(int m){
if(m>0)
{
cout<<m<<'\n';
fun(m-5);
}
cout<<m<<'\n';
}

int main()
{
int num;
cout<<"enter num";
cin>>num;
fun(num);
return 0;
}
