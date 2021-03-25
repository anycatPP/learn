#include<iostream>
using namespace std;
void pattern(int n)
{
if(n==0)
return;
else
pattern(n-1);
cout<<"* ";
}
int main(){
int number;
cout<<"Enter number to printed";
cin>>number;
pattern(number);
return 0;
}
