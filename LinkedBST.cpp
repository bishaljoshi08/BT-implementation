#include "LinkedBST.h"

LinkedBST::LinkedBST()
{
    root = NULL;
}

LinkedBST::~LinkedBST() {}

void LinkedBST::add(int data)
{
    add(root, data);
}

void LinkedBST::preorderTraversal() {}
// int LinkedBST::min(){}

bool LinkedBST::search(int data) {}

int LinkedBST::min()
{
    while (root->left != NULL)
    {
        root = root->left;
    }
    return root->data;
}

int LinkedBST::max()
{
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root->data;
}

void LinkedBST::add(Node *&root, int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    if (root == NULL)
    {
        root = new Node();
        this->root = newNode;
    }
    else
    {
        add(root, newNode);
    }
}

void LinkedBST::add(Node *&subtree, Node *newNode)
{
    if (subtree->data > newNode->data)
    {
        if (subtree->left != NULL)
        {
            add(subtree->left, newNode);
        }
        else
        {
            subtree->left = newNode;
        }
    }
    else
    {
        if (subtree->right != NULL)
        {
            add(subtree->right, newNode);
        }
        else
        {
            subtree->right = newNode;
        }
    }
}

bool LinkedBST::search(Node *&root, int targetKey)
{
    if (root == NULL)
    {
        std::cout << "It is a Null tree" << std::endl;
    }
    else
    {
        Node *p = new Node();
        p = root;
        while (p != NULL)
        {
            if (targetKey > p->data)
            {
                p = p->right;
            }
            else if (targetKey < p->data)
            {
                p = p->left;
            }
            else if (targetKey == p->data)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
    return false;
}

void LinkedBST::preorderTraversal(Node *root)
{
    if (root == NULL)
        return;

    /* first print data of node */
    std::cout << root->data << " ";

    /* then recur on left subtree */
    preorderTraversal(root->left);

    /* now recur on right subtree */
    preorderTraversal(root->right);
}

//Deleting Node recursive way.
void LinkedBST::deleteBST(Node *root, int keytoDelete)
{
    int dat;
    if (root == NULL)
    {
        std::cout << "tree is empty" << std::endl;
        return;
    }
    if (keytoDelete < root->data)
    {
        Node *temp = new Node();
        temp = root->left;
        if (root->left->data == keytoDelete && root->left->left == NULL && root->left->right == NULL)
        {
            root->left = NULL;
        }
        deleteBST(temp, keytoDelete);
        return;
    }
    else if (keytoDelete > root->data)
    {
        Node *temp = new Node();
        temp = root->right;
        if (root->right->data == keytoDelete && root->right->left == NULL && root->right->right == NULL)
        {
            root->right = NULL;
        }
        deleteBST(temp, keytoDelete);
        return;
    }
    else
    {
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            root = NULL;
            return;
        }
        else if (root->left == NULL)
        {
            Node *temp = new Node();
            temp = root->right;
            root->data = root->right->data;
            root->right = root->right->right;
            delete temp;
            return;
        }
        else if (root->right == NULL)
        {
            Node *temp = new Node();
            temp = root->left;
            root->data = root->left->data;
            root->left = root->left->left;
            delete temp;
            return;
        }
        else
        {
            Node *nodetoDelete = new Node();
            nodetoDelete = root;
            Node *newNode = new Node();
            newNode = root->left;
            while (newNode->right != NULL)
            {
                newNode = newNode->right;
            }
            dat = newNode->data;
            deleteBST(nodetoDelete, newNode->data);
            root->data = dat;
            return;
        }
    }
}
