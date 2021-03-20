#include<iostream>
#include<conio.h>
class a{
public:
int a;
};
class b:public a{
public: 
int b;
};
class c:public a{
public:
int c;
};
class d:public b,public c
{
public:
int d;
};
void main()
{
d obj;

