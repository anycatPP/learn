#include<iostream>
#include<vector>
#include<unordered_map>
int main()
{
std::vector<int>values={1,3,5,5,6};

for(int i=0;i<values.size();i++)
{
std::cout<<values[i];
}
for(int value:values)
cout<<value;


for(std::vector<int>::iterator it=values.begin();it!=values.end();++it)
{
cout<<*it;
}
std::unordered_map<std::string,int>map;
map["cherno"]=5;
map["aniket"]=53;
for(std::unordered_map<string,int>::
std::cin.get();
}
