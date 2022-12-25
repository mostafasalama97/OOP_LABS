#include "circle.h"
Circle::Circle() : cp() //constructor
    {
        radius = 0;
        cout << "Circle default constructor" << endl;
    }
Circle::Circle(int r, int co):shape(col)
    {
        radius = r;
        cout<< "Circle overloading constructor" << endl;
    }
/*void Circle::draw() //built in function for Circle drawing
    {
        circle(cp.getx(), cp.gety(), lr.getx(),radius);
    }*/
void Circle::display()
{
    shape::display
    cout << "diameter 1 = " << radius << endl;
}
     //destructor
Circle::~Circle()
    {
        cout<< "Circle destructor" << endl;
    }
