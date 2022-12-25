#include "person.h"


person::person()//default constructor
{
    cout << "this is constructor" << endl;
    name = "unknown";
    gender = "unknown";
    age = 0.0;

}
person::person(string n, string g, float a) //copy constructor
{
    name = n;
    gender = g;
    age = a;
}
    //setter method
void person::set_age(float a)
{
    age = a;
}
void person::set_name(string n)
{
    name = n;
}

void person::set_gender(string g)
{
    gender = g;
}
    //getter method
float person::get_age()
{
    return age;
}
string person::get_name()
{
    return name;
}
string person::get_gender()
{
    return gender;
}
    //for displaying

void person::display()
{
    cout << "person main data" << endl;
    cout << name << " " << gender << " " << age << endl;
}
person::~person() //destructor
{
    cout << "this is destructor";
}
