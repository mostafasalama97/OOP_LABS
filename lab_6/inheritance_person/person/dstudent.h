#include <string>
#include <iostream>
#include "student.h"
//#include "person.h"

using namespace std;

class diplomastudent : public student
{
private:
    string diplomasubject;
public:
    diplomastudent();//default constructor
    diplomastudent(string n, string g, float a, int l, float b, string d, string ds);//copy constructor
    void set_subject(string subject);
    string get_subject();
    void display();
    ~diplomastudent(); //destructor
};
