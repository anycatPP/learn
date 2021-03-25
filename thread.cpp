#include<thread>
#include<iostream>
using namespace std;
void fireMissile()
{
cout<<"firing sidewinder missile"<<endl;
}
int main()
{
thread t(fireMissile);
t.join();
return 0;
}
