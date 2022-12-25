#include <string>
#include <iostream>
using namespace std;

class shape
{
private:
    int color;
public:
    shape();
    shape(int col);
    void set_shape(int c);
    int get_shape();
    void display();
    void draw();
    ~shape();
};
