#include<stdio.h>
void main()
{
int ln;
printf("enter number of lines");
scanf("%d",&ln);
char string[ln][10];
for(int x=0;x<ln;x++)
{
printf("enter lineno %d,(x+1));
scanf("%s",&string[x][0]);
}
for(int x=0;x<ln;x++)
{
printf("lineno %d=%s\n",(x+1),string[x]);
}
}

