#include "point.h"
//point class methods

point::point() //default constructor
            {
                cout<< "point default constructor" << endl;
            }
point::point(int m, int n) //overloading constructor
{
    x=m;
    y=n;
}

    //setter method
void point::setx(int m)
    {
        x = m;
    }
void point::sety(int n)
    {
        y = n;
    }
    //getter method

int point::getx()
{
    return x;
}
int point::gety()
{
    return y;
}

    //destructor
point::~point()
{
    {cout<< "point destructor" << endl;}
}
