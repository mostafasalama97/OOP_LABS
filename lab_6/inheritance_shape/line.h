#include <string>
#include <iostream>
#include "shape.h"
#include "point.h"

using namespace std;


//line class
class Line
{
private:
    point p1;
    point p2;

public:
    Line(); //constructor
    Line(int x1, int y1, int x2, int y2); //overload constructor
    void draw(); //built in function for line drawing
     //destructor
    ~Line();
};
