#include<iostream>
class complex{
private:
int real;
int imag;
public:
complex(int r,int i)
{
real=r;
imag=i;
}
public:
complex(int r,int i)
{
real=r;
imag=i;
}
complex operator ++(int);
complex &operator++();
};
complex &complex::operator ++()
{
real++;
imag++;
return *this;
}

