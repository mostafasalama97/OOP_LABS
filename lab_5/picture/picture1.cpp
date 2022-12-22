#include <iostream>
#include "header.h"
using namespace std;

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
//--------------------------------------------------------------
//line class methods

Line::Line():p1(),p2() //constructor
    {
        cout<< "Line default constructor" << endl;
    }


Line::Line(int x1, int y1, int x2, int y2): p1(x1,y1), p2(x2,y2)
    {
        cout<< "Line overloading constructor" << endl;
    }


/*void Line::draw() //built in function for Line drawing
    {
        Line(p1.getx(), p1.gety(), p2.getx(), p2.gety());
    }*/
     //destructor
Line::~Line()
    {
        cout<< "Line destructor" << endl;
    }

//=====================================================================================

// class rectangle method



Rect::Rect() : ul() , lr() //constructor
    {
        cout<< "Rect default constructor" << endl;
    }
Rect::Rect(int x1, int y1, int x2, int y2) : ul(x1,y1), lr(x2,y2)
    {
                cout<< "Rect overloading constructor" << endl;
    }
/*void Rect::draw() //built in function for Rect drawing
    {
        rectangle(ul.getx(), ul.gety(), lr.getx(), lr.gety());
    }
*/
    //destructor
Rect::~Rect()
    {
        cout<< "Rect destructor" << endl;
    }

//======================================================================
// class circle methods


Circle::Circle() : cp() //constructor
    {
        radius = 0;
        cout << "Circle default constructor" << endl;
    }
Circle::Circle(int m, int n, int r) : cp(m,n)
    {
        radius = r;
        cout<< "Circle overloading constructor" << endl;
    }
/*void Circle::draw() //built in function for Circle drawing
    {
        circle(cp.getx(), cp.gety(), lr.getx(),radius);
    }*/
     //destructor
Circle::~Circle()
    {
        cout<< "Circle destructor" << endl;
    }

//=================================================================
//picture class methods

//default constructor
Picture::Picture()
{
    cNum = 0;
    rNum = 0;
    lNum = 0;
    pline = NULL;
    pCircle = NULL;
    prect = NULL;
}


   //overloading constructor

Picture::Picture(int cn, int rn, int ln, Circle *pc, Rect *pr, Line *pl)
    {
    cNum = cn ;
    rNum = rn ;
    lNum = ln ;
    pline = pl;
    pCircle = pc;
    prect = pr;

    }
    //picture setter
void Picture::setCircle(int cr, Circle *cptr)
    {
         cNum = cr;
        pCircle = cptr;
    }
void Picture::setrect(int rc, Rect *rptr)
    {
         rNum = rc;
        prect = rptr;
    }
void Picture::setline(int ln , Line *lptr)
    {
        lNum = ln;
        pline = lptr;
    }
/*void Picture::paint()
{
    int i;
    for(i=0 ; i<cNum ; i++)
    {
        pCircle[i].draw();
    }
    //--------------------------------
     for(i=0 ; i<rNum ; i++)
    {
        prect[i].draw();
    }
    //---------------------------
     for(i=0 ; i<lNum ; i++)
    {
        pline[i].draw();
    }
}
*/
