#include <string>
#include <iostream>
#include "shape.h"
#include "point.h"
using namespace std;



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
