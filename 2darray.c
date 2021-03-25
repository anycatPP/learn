#include<stdio.h>
void main()
{
char *string[100];
int ln;
printf("enter number of lines");
scanf("%d"&ln);
for(int x=0;x<ln;x++)
{
printf("enter line no%d",(x+1));
scanf("%ms",&string[x]);
}
printf("\n\n");
for(int x=0;x<ln;x++)
{
printf("line no%d -%s\n",(x+1),string[x]);
}
}

