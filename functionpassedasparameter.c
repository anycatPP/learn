#include<stdio.h>
void fun1(){ printf("fun1");}
void fun2(){ printf("fun2");}


void wrapper(void (*fun)())
{
fun();
}
int main()
{
wrapper(fun1);
wrapper(fun2);
return 0;
}

