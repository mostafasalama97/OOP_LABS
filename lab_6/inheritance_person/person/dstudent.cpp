#include "dstudent.h"

diplomastudent::diplomastudent()//default constructor
{
   cout << "diploma student constructor" << endl;
}


diplomastudent::diplomastudent(string n, string g, float a, int l, float b, string d, string ds)
:student(n,g,a,l,b,d)
{
    cout << "diploma student copy constructor" << endl;
     diplomasubject = ds;
}



void diplomastudent::set_subject(string subject)
{
    diplomasubject = subject;
}
string diplomastudent::get_subject()
{
    return diplomasubject ;
}

void diplomastudent::display()
{
     student::display();
      cout << "diploma student main data" << endl;
    cout << " diploma subject  " << diplomasubject << endl ;
}
diplomastudent::~diplomastudent()// destructor
{
   cout << "diploma student distructor" << endl;
}
