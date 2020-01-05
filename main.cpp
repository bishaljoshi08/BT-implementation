#include<iostream>
#include"LinkedBST.h"
#include"binarytree.h"
using namespace std;


int main(){
	LinkedBST tree1;
	tree1.add(&tree1.root,10);
	tree1.add(&tree1.root,5);
	tree1.add(&tree1.root,15);
	tree1.add(&tree1.root,13);
	tree1.add(&tree1.root,20);
	tree1.preorderTraversal(&tree1.root);
	cout<<endl;
    tree1.search(&tree1.root,10);
    tree1.search(&tree1.root,3);
}