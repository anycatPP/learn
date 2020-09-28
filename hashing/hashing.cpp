#include <iostream>
#include "some.h"
using namespace std;
int main()
{
	hashtable hashy;
	
	hashy.AddItem("aniket", "singh");
	hashy.AddItem("saur", "kaha");
	hashy.AddItem("prahlad", "daba");
	hashy.AddItem("uddeshya", "psingh");
	hashy.AddItem("aryan", "dev");
	hashy.AddItem("ayush", "chaudhary");
	hashy.AddItem("aman", "patel");
	hashy.AddItem("atul", "singh");
	hashy.AddItem("aman", "patel");
	hashy.AddItem("atul", "singh");
	hashy.PrintTable();




	return 0;
}
