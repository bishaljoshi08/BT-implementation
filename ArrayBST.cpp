#include <iostream>
#include "ArrayBST.h"
#define MAX_SIZE 100
using std::cout;

ArrayBST :: ArrayBST(){
    for(int i =0; i<MAX_SIZE;i++)
        this->elements[i] = 0;
}

ArrayBST :: ~ArrayBST(){}

void ArrayBST::add(int data)
{
    //ALGO
    if(this->elements[0]=0){
        this->elements[1]=data;
    }
    else
    {
        for(int i=1; i<=MAX_SIZE;)
        {
            if(data < this->elements[i])
                {
                    //Insert to the left
                    i = 2*1;
                }
            else
                i = 2*i + 1;
            if(this->elements[i]==0)
            {
                this->elements[i] = data;
                            break;
            }
        }
    }
    this->elements[0] = this->elements[0]+1;
}

void ArrayBST :: preorderTraversal(){}

bool ArrayBST :: search(int data) 
{
	for(int i=0;i<MAX_SIZE;i++)
 	{
 		if(this->elements[i]== data)
 		{
 			//cout<<"data found";
 			return data;
 			break;
		 }
		
	
	 }
	 
	 cout<<"data not found";
}

int main()
{
    ArrayBST A;
    A.add(1);
    A.add(2);
    A.add(22);
    A.add(5);
    A.add(19);
    A.add(44);
    A.add(64);
    int b=A.search(614);
    cout<<b;
}
