#include <iostream>
//#include "student.h"
#include "dstudent.h"
//#include "person.h"
using namespace std;

int main()
{
    person p1("ahmed","male",32);
    student s1("ahmed","male",32,10,3.5,"acc");
    diplomastudent ds1("ahmed","male",32,10,3.5,"acc","science");
    //p1.display();
    /*s1.display();
    s1.set_name("mostafa");
    s1.set_gender("male");
    s1.set_age(25);
    s1.set_depart("iot");
    s1.set_GBA(2.5);
    s1.set_level(9);
    s1.display();*/
    ds1.display();

    return 0;
}
