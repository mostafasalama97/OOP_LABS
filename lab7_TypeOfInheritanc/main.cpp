#include <iostream>

using namespace std;

class GeoShape
{
protected:
    float dim1;
    float dim2;
public:
    GeoShape()
    {
        dim1 = dim2 =0;
    }
    GeoShape(float x)
    {
        dim1 = dim1 = x;
    }
    GeoShape(float x , float y)
    {
        dim1 = x;
        dim2 = y;
    }
    void setDim1(float x)
    {
        dim1 = x ;
    }
    float getDim1()
    {
        return dim1;
    }
    void setDim2(float y)
    {
        dim2 = y ;
    }
    float getDim2()
    {
        return dim2;
    }
    float calculateArea()
    {
        return 0;
    }
};

//=================================================

class Triangle : public GeoShape
{
public:
    Triangle(float b , float h) : GeoShape(b,h)
    {

    }
    float calculateArea()
    {
        return 0.5 * dim1 * dim2;
    }
};

//========================================================

class Rect : public GeoShape
{
public:
    Rect(float x , float y) : GeoShape(x,y)
    {

    }
    float calculateArea()
    {
        return dim1 * dim2;
    }
};

//===================================================


class Circle : private GeoShape
{
public:
    Circle(float r):GeoShape(r)
    {

    }
    void setRadius(float r)
    {
        dim1 = dim2 = r;
    }
    float getRadius()
    {
        return dim1;
    }
    float calculateArea()
    {
        return 22.0/7*dim1*dim2;
    }
};


//=====================================================

class Square : private Rect //second derived
{
public:
    Square(float x) : Rect(x,x)
    {

    }
    void setSquareDim(float x)
    {
        dim1 = dim2 = x;
    }
    float getSquareDim()
    {
        return dim1;
    }
    float calculateArea()
    {
        return Rect::calculateArea();
    }
};

//=========================================================================

int main()
{
      Triangle t(4, 5);
    Rect r(5, 6);
    Circle c(7);

    cout << "Triangle Area = " << t.calculateArea() << endl;
    cout << "Rectangle Area = " << r.calculateArea() << endl;
    cout << "Circle Area = " << c.calculateArea() << endl;
    return 0;
}
