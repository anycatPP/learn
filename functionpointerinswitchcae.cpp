#include<stdio.h>
void add(int a,int b)
{
printf("addition is %d",a+b);
}
void subtract(int a,int b)
{
printf("substraction is %d",a-b);
}
void mulitply(int a ,int b)
{
printf("mulitplication is %d",a*b);
}
int main()
{
//function pointer is an array of function pointers
void (*fun_ptr_arr[])(int,int)={add,substract,mulitply};
unsigned int ch a=15,b=10;
printf("enter choice 0 for add 1 for substract and 2");
scanf("%d",&ch);
if(ch>2)
return 0;
(*fun_ptr_arr[ch])(a,b);
return 0;
}
