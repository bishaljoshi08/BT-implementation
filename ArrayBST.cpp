#include<iostream>
using namespace std;
#include "ArrayBST.h"
ArrayBST::ArrayBST(){
	for(int i=0;i<MAX_SIZE;i++){
		this->elements[i]=0;
	}	
}
ArrayBST::~ArrayBST(){}
void ArrayBST::add(int data){
	if(this->elements[1]==0){
		elements[1]=data;
	}
	else{
		for(int i=1;i<MAX_SIZE;){
			if(data<this->elements[i]){
				i=2*i;
				cout<<"Left side :\t"<<i<<endl;
			}
			else{
				i=2*i+1;
				cout<<"Right side :\t"<<i<<endl;
			}
			if(this->elements[i]==0){
				this->elements[i]=data;
				cout<<"Inserted on "<<i<<endl;
				break;
			}
		}
	}
}
bool ArrayBST::search(int data){
	for(int i=1;i<MAX_SIZE;){
		if(this->elements[i]==data){
			cout<<"Required number "<<data<<" is found in index "<<i<<" of the tree\n";
			return true;
		}
		else if (data<this->elements[i]){
				i=2*i;
			}
		else{
				i=2*i+1;
			}
	}
	cout<<"Required number "<<data<<"  is not found in the tree\n";
	return false;
}
void ArrayBST::preorderTraversal(){
	int i=1;
	int j=0;						//For visited parent node
	int k=0;						//For visited left node
	int l=0;						//For visited right node
	while(i<MAX_SIZE && i>0)
	{
		if(j!=1)
		{
			cout<<this->elements[i]<<" ";
			k=0;
			l=0;
		}
		if(2*i<MAX_SIZE && this->elements[2*i]!=0 && k!=1)
		{
			i=2*i;
			j=0;
			l=0;
		}
		else if (2*i+1<MAX_SIZE && this->elements[2*i+1]!=0 && l!=1)
		{
			i=2*i+1;
			j=0;
			k=0;
		}
		else
		{
			if(i%2!=0)
			{					//Check if right node is visited.
				l=1;
			}
			else
			{
				l=0;
			}
			i=int(i/2);
			j=1;
			k=1;
		}	
		}	 
	}
	
int ArrayBST::max()
{
	for(int i=1;i<MAX_SIZE;)
	{
		if(this->elements[2*i+1]!=0)
		{
			i=2*i+1;
		}
		else
		{
			return elements[i];
		}
		
	}
	
}
	
int ArrayBST::min()
{
		for(int i=1;i<MAX_SIZE;)
	{
		if(this->elements[2*i]!=0)
		{
			i=2*i;
		}
		else
		{
			return elements[i];
		}
		
	}
	

	
}
void ArrayBST::remove(int data)
{
}
void ArrayBST::inoreder(int x)
{
	
	int l=2*x;
	int r=2*x+1;
	if(this->elements[l]!=0)
	{
		inoreder( l);
	}
	cout<<(this->elements[x])<<" ";
	
	if(this->elements[r]!=0)
	{
		inoreder( r);
	}
	
		
}

int main(){
	ArrayBST a;
	a.add(15);
	a.add(10);
	a.add(11);
	a.add(14);
	a.add(13);
	a.add(4);
	a.add(1);
	a.add(5);
	a.add(16);
	a.add(18);
	a.add(17);
	a.add(20);
	for(int i=0;i<MAX_SIZE;i++){
		cout<<a.elements[i]<<",";
	}
	cout<<endl;
	a.preorderTraversal();
	cout<<endl;
	a.search(33);
	a.search(29);
	int b;
	b=a.max();
	cout<<b<<endl;
	int c;
	c=a.min();
	cout<<c<<endl;
	a.inoreder(1);
	return 0;
}



