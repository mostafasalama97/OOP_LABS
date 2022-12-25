#include "line.h"
//line class methods

Line::Line():p1(),p2() //constructor
    {
        cout<< "Line default constructor" << endl;
    }


Line::Line(int x1, int y1,int col): shape(col)
    {
        p1 = x1;
        p2 = y1;
        cout<< "Line overloading constructor" << endl;
    }


/*void Line::draw() //built in function for Line drawing
    {
        Line(p1.getx(), p1.gety(), p2.getx(), p2.gety());
    }*/
void Line::display()
{
    shape::display
    cout << "diameter 1 = " << p1 << "diameter 2 = " << p2 << endl;
}
     //destructor
Line::~Line()
    {
        cout<< "Line destructor" << endl;
    }
