//How to store a very large number of more than 100 digits in cpp
//Given a integet N in the form of string str consisting of more than 100 digits 
//the task is to store the value for performing an arithmetic operation and print the given integer
// NO data type is presente in cpp to store a 10 ^100 . 
// just copy the string data in integer array or any type of array
#include<bits/stdc++.h>
using namespace std;
int* getbiginteger(string str) {
	int x =str.size(),a=0;
	int* arr = new int [str.size()];
	while(a!=x){
		arr[a]=str[a]-'0';
		a++;
	}
	return arr;
}
int main(){
	string str="12345678901234567890";
	int* arr= getbiginteger(str);
	for(int i=0;i<str.size();i++){
		cout<<arr[i];
	} return 0;
}
