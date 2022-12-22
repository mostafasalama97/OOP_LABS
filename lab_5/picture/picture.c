#include "header.h"
using namespace std;

//point class methods

point::point() //default constructor
            {
                cout<< "point default constructor" << endl;
            }
point::point(int m, int n) //overloading constructor

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

line::line() : start() , end() //constructor
    {
        cout<< "line default constructor" << endl;
    }
line::line(int x1, int y1, int x2, int y2) : start(int x1, int y1), end(int x2, int y2)
    {
        cout<< "line overloading constructor" << endl;
    }
void line::draw() //built in function for line drawing
    {
        line(start.getx(), start.gety(), end.getx(), end.gety());
    }
     //destructor
line::~line()
    {
        cout<< "line destructor" << endl;
    }

};

//=====================================================================================

// class rectangle method



Rect::Rect() : ul() , lr() //constructor
    {
        cout<< "Rect default constructor" << endl;
    }
Rect::Rect(int x1, int y1, int x2, int y2) : ul(int x1, int y1), lr(int x2, int y2)
    {
                cout<< "Rect overloading constructor" << endl;
    }
void Rect::draw() //built in function for Rect drawing
    {
        rectangle(ul.getx(), ul.gety(), lr.getx(), lr.gety());
    }

    //destructor
Rect::~Rect();
    {
        cout<< "Rect destructor" << endl;
    }
};

//======================================================================
// class circle methods


Circle::Circle() : cp() //constructor
    {
        rad = 0;
        cout<< "Circle default constructor" << endl;
    }
Circle::Circle(int m, int n, int r) : cp(m,n)
    {
        rad = r;
        cout<< "Circle overloading constructor" << endl;
    }
void Circle::draw() //built in function for Circle drawing
    {
        circle(cp.getx(), cp.gety(), lr.getx(),rad);
    }
     //destructor
Circle::~Circle();
    {
        cout<< "Circle destructor" << endl;
    }
};

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

Picture::Picture(int cn, int rn, int ln, line *pl, Circle *pc, rect *pr)
    {
    cNum = cn;
    rNum = rn;
    lNum = ln;
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
void Picture::setrect(int rc, rect *rptr)
    {
         rNum = rc;
        prect = rptr;
    }
void Picture::setline(int ln , line *lptr)
    {
        lNum = ln;
        pline = lptr;
    }
void Picture::paint()
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
