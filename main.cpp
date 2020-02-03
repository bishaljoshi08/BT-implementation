#include<iostream>
#include"LinkedBST.h"
#include"binarytree.h"
using namespace std;


int main(){
	LinkedBST tree1;
	int number;
	char character;
	
	top:
	cout<<"Enter any number"<<endl;
	cin>>number;
	tree1.add(&tree1.root,number);
	cout<<"Do you want to enter again(y/n)??"<<endl;
	cin>>character;
	if((character=='y') || (character=='Y')) goto top;
	
	
	cout<<"preorderTraversal of the tree is"<<endl;
	tree1.preorderTraversal(&tree1.root);
	cout<<endl;
	
	cout<<"minimun value of the tree is"<<endl;
	cout<<tree1.min(&tree1.root)<<endl;
	
	search:
	cout<<"Enter any number you wanna search"<<endl;
	cin>>number;
	tree1.search(&tree1.root,number);
	cout<<"Do you want to search again(y/n)??"<<endl;
	cin>>character;
	if((character=='y') || (character=='Y')) goto search;
}