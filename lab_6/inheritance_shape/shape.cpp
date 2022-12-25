#include "shape.h"


shape::shape()
{
    cout << "shape default constructor" << endl;
}
shape::shape(int col)
{
    color = col;
}
void shape::set_shape(int c)
{
    color = c;
}
int shape::get_shape()
{
    return color;
}
void shape::display()
{
     cout << "shape main data" << endl;
    cout << "color is : " << color << endl;
}
shape::~shape()
{
    cout << "this is shape destructor" << endl;
}
