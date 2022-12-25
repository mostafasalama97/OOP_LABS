#include <string>
#include <iostream>
#include "rect.h"
#include "line.h"
#include "circle.h"
using namespace std;

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
