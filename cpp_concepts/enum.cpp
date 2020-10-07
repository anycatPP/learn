#include<iostream>
/* typedef matlab ek alag naam de dena kisi datatype ko
 * yaha se depth me padh lena
https://www.geeksforgeeks.org/typedef-versus-define-c*/

// C program to demonstrate importance 
// of typedef over #define for data types 
#include <stdio.h> 
typedef char* ptr; 
#define PTR char* 
int main() 
{ 
	ptr a, b, c; 
	PTR x, y, z; 
	printf("sizeof a:%zu\n" ,sizeof(a) ); 
	printf("sizeof b:%zu\n" ,sizeof(b) ); 
	printf("sizeof c:%zu\n" ,sizeof(c) ); 
	printf("sizeof x:%zu\n" ,sizeof(x) ); 
	printf("sizeof y:%zu\n" ,sizeof(y) ); 
	printf("sizeof z:%zu\n" ,sizeof(z) ); 
	return 0; 
} 

