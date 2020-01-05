#include<iostream>
#include"LinkedBST.h"
#include"binarytree.h"


int main(){
    LinkedBST tree;
    tree.add(45);
    tree.add(tree.root,35);
    Node *newNode=new Node();
    newNode->data=50;
    tree.add(tree.root,newNode);
    tree.preorderTraversal(tree.root);
    std::cout<<std::endl<<tree.search(tree.root,50)<<std::endl;
}
