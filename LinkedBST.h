#ifndef LINKEDBST_h
#define LINKEDBST_h
#include "binarytree.h"


class Node{
public:
    int data;
    Node *left;
    Node *right;
    Node(){
        data=0;
        left=right=NULL;
    }
    friend class LinkedBST;
};



class LinkedBST:public BinarySearchTree{
    public:
    Node *root;
    LinkedBST();
    ~LinkedBST();
    void preorderTraversal();
    void preorderTraversal(Node *root);
    void add(int data);
    void add(Node *&root,int data);
    bool search(int data);
    bool search(Node *&root,int targetKey);
    void add(Node *&subtree, Node *newNode);
};
