#include<bits/stdc++.h>
using namespace std;
class parent{
public:
int id_p;
};
class child:public parent
{
public:
int id_c;
};
int main()
{
child obj;
obj.id_c=5;
obj.id_p=23;
cout<<"child id is"<<obj.id_c<<endl;
cout<<"child id is "<<obj.id_p<<endl;
return 0;}

