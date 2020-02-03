#include "binarytree.h"
#define MAX_SIZE 16

class ArrayBST : public BinarySearchTree
{

    public:
        int elements[MAX_SIZE];
        ArrayBST();
        ~ArrayBST();
        void preorderTraversal();
        void add(int data);
        bool search(int data);
        int max();
};



