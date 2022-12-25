#include <string>
#include <iostream>
#include "person.h"
using namespace std;
class student : public person
{
private:
    int level;
    float GBA;
    string depart;
public:
    student(); //constructor
    student(string n, string g, float a, int l, float b, string d);
    void set_level(int l);
    int get_level();
    void set_GBA(float b);
    float get_GBA();
    void set_depart(string d);
    string get_depart();
    void display();
    ~student();//destructor
};
