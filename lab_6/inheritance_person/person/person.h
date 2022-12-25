#include <string>
#include <iostream>
using namespace std;

class person
{
private:
    string name ;
    string gender ;
    float age;

public:
    person();//default constructor
    person(string n, string g, float a); //copy constructor
    //setter method
    void set_age(float a);
    void set_name(string n);
    void set_gender(string g);
    //getter method
    float get_age();
    string get_name();
    string get_gender();
    //for displaying
    void display();
    ~person(); //destructor

};
