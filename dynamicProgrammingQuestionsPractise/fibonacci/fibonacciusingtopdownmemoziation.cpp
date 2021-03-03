#include<iostream>
using namespace std;
#define NIL -1
#define MAX 100
int lookup[MAX];
void _initialize(){
	int i;
	for(i=0;i<MAX;i++)
		lookup[i]=NIL;
}
/* function for nth Fibonacci number */
int fib(int n){
	if(lookup[n]==NIL)
	{
		if(n<=1)
			lookup[n]=n;
		else
			lookup
