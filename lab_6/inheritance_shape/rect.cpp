#include "rect.h"

Rect::Rect() : ul() , lr() //constructor
    {
        cout<< "Rect default constructor" << endl;
    }
Rect::Rect(int x1, int y1,int col): shape(col)
    {
        ul = x1;
        lr = y1;
        cout<< "Rect overloading constructor" << endl;
    }
/*void Rect::draw() //built in function for Rect drawing
    {
        rectangle(ul.getx(), ul.gety(), lr.getx(), lr.gety());
    }
*/
void Rect::display()
{
    shape::display
    cout << "diameter 1 = " << ul << "diameter 2 = " << lr << endl;
}
    //destructor
Rect::~Rect()
    {
        cout<< "Rect destructor" << endl;
    }
