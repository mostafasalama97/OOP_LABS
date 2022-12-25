#include "student.h"
student::student()
{
    cout << "student constructor" << endl ;
}
student::student(string n, string g, float a, int l, float b, string d):person(n,g,a)
{
    level = l;
    GBA = b;
    depart = d;
    cout << "student copy constructor" << endl ;
}
void student::set_level(int l)
{
    level = l;
}
int student::get_level()
{
    return level;
}
void student::set_GBA(float b)
{
    GBA = b;
}
float student::get_GBA()
{
    return GBA;
}
void student::set_depart(string d)
{
    depart = d;
}
string student::get_depart()
{
    return depart;
}
student::~student()
{
    cout << "student destructor" << endl ;
}
void student::display()
{
    person::display();
      cout << "student main data" << endl;
    cout << " depart " << depart << " level " << level << " GBA " << GBA << endl ;
}
