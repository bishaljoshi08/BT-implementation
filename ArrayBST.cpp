#include <iostream>
#include "ArrayBST.h"
#define MAX_SIZE 16
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
                       cout<<"deependra";     break;
            }
        }
    }
    this->elements[0] = this->elements[0]+1;
}

void ArrayBST :: preorderTraversal(){}

bool ArrayBST :: search(int data) {}

int main()
{
    ArrayBST A;
    A.add(1);
    A.add(2);
}
