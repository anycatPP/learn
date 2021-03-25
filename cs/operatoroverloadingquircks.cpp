#include<stdlib.h>
#include<stdio.h>
#include<iostream>
using namespace std;
class test{
private:
void* operator new(size_t size){return; }
void* operator new[](size_t size){return;}
};
int main()
{
test *obj=new test;
test *arr=new test[10];
return 0;
}

