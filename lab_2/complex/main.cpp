#include <iostream>

using namespace std;

class complexe
{
private:
    float real;
    float img;

public:
    complexe ()
    {
        cout << "start the program" << "\n";
        real=0;
        img=0;
    }
    setcomplex(float re , float imag)
    {
        real = re;
        img = imag;
    }
    setcomplex(float num)
    {
        real = img = num;
    }
    printComplex ()
    {
        if (img > 0)
        {
            cout << "your compex number is "<< real << "+" << img << "i" << "\n";
        }
        else
        {
            cout << "your complex number is "<< real << "-" << img << "i" << "\n";

        }
    }

       ~complexe()
       {
           cout << "end of program good bye" << "\n" ;
       }
};
int main()
{
    complexe mycomp1 , result;
     float x;
     float y;
    mycomp1.setcomplex(3,4);
    mycomp1.printComplex ();
    mycomp1.setcomplex(3);
    mycomp1.printComplex ();
    return 0;
}
