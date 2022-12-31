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


class Circle : public GeoShape
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

class Square : public Rect //second derived
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

/*float sumAreas (GeoShape *p1, GeoShape *p2, GeoShape *p3)
{
    return p1->calculateArea() + p2->calculateArea() + p3->calculateArea();
}*/

//=========================================================================

/*int main()
{
    Rect r(5,4);
    Triangle t(6,9);
    Circle c(8);
    cout << "Rect Area = " << r.calculateArea() << endl;
    cout << "Triangle Area = " << t.calculateArea() << endl;
    cout << "Circle Area = " << c.calculateArea() << endl;
    cout <<"Areas Sum = "<<sumAreas(&r,&c,&t)<< endl;
    return 0;

}*/


float sumAreas(GeoShape *p1,GeoShape *p2,GeoShape *p3)
{
    return p1->calculateArea() + p2->calculateArea() + p3->calculateArea() ;
}

int main()
{
    GeoShape *p1 ,*p2 ,*p3 ;
    Triangle t1(30,4.5);
    cout<<"Triangle area = "<<t1.calculateArea()<<endl;
    Rect r1(1.8,2.5);
    cout<<"Rect area = "<<r1.calculateArea()<<endl;
    Circle c1(7.2);
    cout<<"Circle area = "<<c1.calculateArea()<<endl;
    p1=&t1;
    p2=&r1;
    p3=&c1;
    cout<<"summition of all areas = "<<sumAreas(p1,p2,p3)<<endl;
    return 0;
}
