#include<iostream>
using namespace std;
void checkBalance(string code)
{
stack<int>parens;
for(int i=0;i<code.size();i++)
{
if(code[i]=='{'||code[i]=='('){
parens.push(code[i]);
}
else if(code[i]=='}')
{
if(parens.pop()!='{'){
return i;
}
else{


int main(){

