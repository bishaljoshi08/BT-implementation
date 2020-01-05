
#include "binarytree.h "
#define max_size 100

class ArrayBst:public BinarySearchTree
{
	private:
		int  elements[max_size];
		
	public:
		ArrayBst();
	    void preorderTraversal();
	    void add(int data);
	    bool search(int data);
	
};
