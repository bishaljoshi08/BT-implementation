#include"LinkedBST.h"
#include<iostream>

LinkedBST::LinkedBST(){
	root = NULL;
}

LinkedBST::~LinkedBST(){

}

void LinkedBST::preordertraversal(){


}

bool LinkedBST::searchBST(int data){
	node* p=root;
	while(p!=null){
		if (p->data == data) 
			return true;
		else if (data < p->data)
			p=p->left;
		else 
			p=p->right;
	}
	return false;
}

void LinkedBST::addBST(node *root,int data){
	root
	
	if (data < root->data){
		if (root->left!=NULL){ 
			
			addBST(root->left,data);
		}
		else{
			Node *newNode=new Node(); 
			newNode->data=data;
			root->left=newNode
		}
	}
	else if (data > root->data){
		if (root->right!=NULL){ 
			
			addBST(root->right,data);
		}
		else{
			Node *newNode=new Node(); 
			newNode->data=data;
			root->right=newNode
		}
	}