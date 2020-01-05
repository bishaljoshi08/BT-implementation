#include<iostream>
#include "arraybst.h"
#include "binarytree.h"

ArrayBst::ArrayBst()
{
	this->elements[0]=0;
}
void ArrayBst:: add(int data){
	if( this->elements[0]==0){
		this->elements[1]=data;
	}
	else{
		for(int i=1;i<=max_size;)
	     {
		     if(data< this->elements[i]){
		     	i=2*i;
		     	
			 }
			 else 
			 {
			 	i=2*i+1;
			 }
			 if(this->elements[i]==0)
			 {
			    this->elements[i]==data;
				break;	
			 }
		}
		        
	}
	this->elements[0]++;
	
	
}
int main()
{
	ArrayBst a;
	a.add(5);

	
}
