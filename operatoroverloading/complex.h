#ifndef COMPLEX_H
#define COMPLEX_H

class complex
{
public:
complex()
{
real=0; 
imag=0;
}
complex(double a)
{
real=a;
image=0;
}
complex(double a,double b)
{
real=a;
imag=b;
}
private:
double real;
double imag;
public:
void setreal(double a)
{
real=a;
}
void setImag(double b)
{
imag=b;
}
double getreal()const
{
return real;
}
double getimag()const
{
return imag;
}
complex operator +(const complex &);
complex operator -(const complex &);
complex operator *(const complex &);
complex operator / (const complex &);
complex& operator ++();
complex& operator --();
complex& operator ++(int);
complex& operator --(int);
void operator=(const complex &right)
{
real=right.real;
imag=right.imag;
}
class divisionbyzero{};
};
#endif

