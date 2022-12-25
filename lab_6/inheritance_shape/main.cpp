#include <iostream>
#include "circle.h"
#include "line.h"
#include "rect.h"
using namespace std;

int main()
{
      Rect r1(20,10,555);
    Circle c1(12,666);
    Line l1(45,98,777);
    shape sh1(222);
    //p1.display();
    /*s1.display();
    s1.set_name("mostafa");
    s1.set_gender("male");
    s1.set_age(25);
    s1.set_depart("iot");
    s1.set_GBA(2.5);
    s1.set_level(9);
    s1.display();*/
    r1.display();
    c1.display();
    l1.display();
    sh1.display();
    return 0;
}
