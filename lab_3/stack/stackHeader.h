#include <iostream>
using namespace std;
class stack
{
private:
    int top;
    int *ptr;
    int size;
    static int counter ;

public:
    stack(int n);
    ~stack();
    void push(int x);
    int pop();

};
