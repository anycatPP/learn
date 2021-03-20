#include<stdio.h>
void fun(int a)
{
printf("value of a is ",a);
}
int main()
{
void (*fun_ptr)(int)=&fun;
/* the above line is equivalent of following to
void (*fun_ptr)(int);
fun_ptr=&fun;
*/
(*fun_ptr)(10);
return 0;
}
