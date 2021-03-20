#include<bits/stdc++.h>
using namespace std;
int main()
{
char filename[100];
cout<<"enter file name to compile";
cin.getline(filename,100);
string str="g++";
str=str+" -o a.out" +filename;
const char *command=str.c_str();
cout<<"compiling  file using"<<command<<endl;
system(command);
cout<<"running file";
system("./a.out");
return 0;
}
