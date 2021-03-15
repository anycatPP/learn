#include<thread>
#include<iostream>
using namespace std;
class missile
{
public:
void operator()()const
{
cout<<"firing tomahawk missile"<<endl;
}
};
int main()
{
missile tom;
thread t(tom);
t.join();
return 0;
}
