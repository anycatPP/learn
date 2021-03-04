#include<iostream>
using namespace std;
unsigned char reverse(unsigned char c)
{
int shift;
unsigned char result=0;
for(shift=0;shift<CHAR_BITS;shift++)
{
if(c&(
