#include <iostream>
#include "stackHeader.h"
using namespace std;

int main()
{
    stack s1(1);
    s1.push(5);
    s1.push(6);
    s1.push(7);
    cout<<"\n";
    cout<<s1.pop();
    return 0;
}
