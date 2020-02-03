#ifndef LINKEDBST_h
#define LINKEDBST_h
#include "binarytree.h"


class node
{
    int data;
    node* left ;
    node* right;
    friend class LinkedBST;
public:
    node();
    node(int);
    ~node();
};


class LinkedBST:public BinarySearchTree{
    
    public:
    node root;
    LinkedBST();
    ~LinkedBST();
    void preorderTraversal();
    void preorderTraversal(node *root);
    void add(int data);
    void add(node *root,int data);
    bool search(int data);
    int min();
    int min(node *root);
    bool search(node *root,int targetKey);
};
#endif
