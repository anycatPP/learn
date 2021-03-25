#include<stdio.h>
void fun(int a)
{
printf("value of a is %d",a);
}
int main()
{
void (*fun_ptr)(int)=fun;
fun_ptr(10);
return 0;
}
