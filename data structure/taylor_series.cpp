#include<iostream>
using namespace std;
int taylor(int x,int n)
{
	static int p,f;
	int r;
	if(n==0)
	return 1;
	else {
		r=taylor(x,n-1);
		p=p*x;
		f=f*n;
		return r+p/f;
	}
}

int main()
{
	int x, n;
	cout<<"enter x, n";
	cin>>x>>n;
	cout<<taylor(x,n);
	return 0;
}
