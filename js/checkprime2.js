function isprime(n)
{
var divisor=2;
while(n>divisor)
{
if(n%divisor==0)
{
return false;
}
else
divisor+2;
}
return true;
}
isprime(234);
