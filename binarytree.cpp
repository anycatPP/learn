#include<bits/stdc++.h>
using namespace std;
class BST{
	int data;
	BST *left,*right;
	public:
	BST();
	BST(int);
	BST* Insert(BST*,int);
	void Inorder(BST*);
};
BST::BST():data(0),left(NULL),right(NUlL){

}
BST* BST::Insert(BST* root,int value){
	if(!root){
		return new BST(value);}

