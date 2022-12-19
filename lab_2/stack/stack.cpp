#include <iostream>
#include "stackHeader.h"
stack::stack(int n=10)
{
    size = n;
    top = 0;
    ptr = new int[size];
    counter ++;
    cout << "start the prgram " << "\n" << "constructor method"<<"\n" <<"\n"<<counter;
}
stack::~stack()
{
    delete[] ptr;
    counter --;
    cout <<"\n"<<"good bye "<< counter;
}
void stack::push (int n)
{
    if (top < size)
    {
        ptr[top] = n;
        top ++;

    }
    else
    {
        cout <<"\n"<<"stack is full "<<"\n";
    }
}

int stack::pop ()
{
    int y;
    if (top ==0 )
    {
        cout << "stack is empty "<<"\n";
        y = -1;
    }
    else
    {
        top --;
        y = ptr[top];
    }
    return y;
}
int stack::counter = 0;
