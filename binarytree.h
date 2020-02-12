#ifndef BINARYTREE_h
#define BINARYTREE_h
class BinarySearchTree{
		public:
			virtual void preorderTraversal()=0;
			virtual void add(int data)=0;
			virtual bool search(int data)=0;

			virtual int min()=0;

			virtual int max()=0;
			virtual void remove(int data)=0;
			virtual void inoreder(int x)=0;

};
#endif
