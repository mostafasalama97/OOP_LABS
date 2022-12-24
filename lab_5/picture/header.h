#ifndef HEADER_H
#define HEADER_H
class point
{
private:
    int x;
    int y;
public:
    point(); //default constructor
    point(int m, int n); //overloading constructor

    //setter method
    void setx(int m);
    void sety(int n);

    //getter method

    int getx();
    int gety();

    //destructor
    ~point();
};

//line class
class Line
{
private:
    point p1;
    point p2;

public:
    Line(); //: p1() , p2()  //constructor
    Line(int x1, int y1, int x2, int y2) ;//: p1(int x1, int y1), p2(int x2, int y2); //overload constructor
    void draw(); //built in function for line drawing
     //destructor
    ~Line();
};

// class rectangle

class Rect
{
private:
    point ul;
    point lr;

public:

    Rect(); //: ul() , lr() //constructor
    Rect(int x1, int y1, int x2, int y2);// : ul(int x1, int y1), lr(int x2, int y2)
    void draw(); //built in function for Rect drawing

    //destructor
    ~Rect();
};


// class circle

class Circle
{
private:
    point cp;
    int radius; //need it only for drawing

public:

    Circle();// : cp() //constructor
    Circle(int m, int n, int r);// : cp(m,n)
    void draw(); //built in function for Circle drawing
     //destructor
    ~Circle();
};

// class picture
class Picture
{
private:
    int cNum , rNum , lNum;
    Line *pline;
    Circle *pCircle;
    Rect *prect;
public:
    Picture(); //default constructor
    Picture(int cn, int rn, int ln, Circle *pc, Rect *pr, Line *pl);   //overloading constructor
    //picture setter
    void setCircle(int, Circle *);
    void setrect(int, Rect *);
    void setline(int, Line *);
    void paint();
};
#endif // HEADER_H
