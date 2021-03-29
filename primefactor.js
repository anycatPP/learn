function primefactor(n)
{
var factor=[],
divisor=2;
while(n>2)
{
if(n%divisor==0)
factor.push(divisor);
n=n/divisor;

