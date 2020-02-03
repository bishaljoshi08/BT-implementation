#include"LinkedBST.h"
#include<iostream>
using namespace std;

node::node(){
    data=0;
    left=right=nullptr;
}

node::node(int value){
    data=value;
    left=right=nullptr;
}

node::~node(){}


LinkedBST::LinkedBST(){
}

LinkedBST::~LinkedBST(){}

void LinkedBST::add(int data){
}

void LinkedBST::preorderTraversal(){}

bool LinkedBST::search(int data){}

int LinkedBST::min(){}


void LinkedBST::add(node *root,int data){
if (root->data==0){
    root->data=data;
}else{
        if (data < root->data){
            if (!root->left){ 
                node *newnode=new node(data); 
                root->left=newnode;
            }
            else{
                add(root->left,data);
            }
        }
        else if (data > root->data){
            if (!root->right){ 
                node *newnode=new node(data); 
                root->right=newnode;
            }
            else{
                add(root->right,data);
            }
        }
    }
}

bool LinkedBST::search(node *root,int targetKey){
    if(root->data==0){
        cout<<"It is a Null tree"<<endl;
    }
    else{
        node *p=new node();
        p=root;
        while(p){
            if(targetKey>p->data){
                p=p->right;
            }
            else if(targetKey<p->data){
                p=p->left;
            }
            else if(targetKey==p->data){
                cout<<targetKey<<" is here"<<endl;
                return 1;
                
            }
            else{
                cout<<targetKey<<" is not here"<<endl;
                return 0;
            }
        }
    }
    cout<<targetKey<<" is not here"<<endl;
    return 0;
}


void LinkedBST::preorderTraversal(node* root) { 
    if (!root) 
    return; 
  
    
    cout << root->data << "\t"; 
  
    
    preorderTraversal(root->left);  
  
    
    preorderTraversal(root->right); 
}  

int LinkedBST::min(node* root){
    if(root->data==0){
        cout<<"It is a Null tree"<<endl;
    }
    else if(root->left==nullptr){
        return root->data;
    }
    else{
        min(root->left);
        
    }
        
    
}
