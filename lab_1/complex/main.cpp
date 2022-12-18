#include <iostream>

using namespace std;

class complexe
{
private:
    float real;
    float img;

public:
    void setreal (float r)
    {
        if (r >=0)
        real = r;
        else
            cout << "error , enter positive value";
    }
    float getreal ()
    {
        return real;
    }
     void setimg (float mg)
    {
        if (mg >=0)
        img = mg;
        else
            cout << "error , enter positive value";
    }
    float getimg ()
    {
        return img;
    }
    printComplex ()
    {
        if (img < 0)
        {
            cout << "your compex number is "<< real << "+" << img << "i" << "\n";
        }
        else
        {
            cout << "your compex number is "<< real << "-" << img << "i" << "\n";

        }
    }
     complexe printsub(complexe mycomp2)
       {
           complexe temp;
           temp.real = real - mycomp2.real;
           temp.img = img - mycomp2.img;
           return temp;
       }
        complexe printadd(complexe mycomp2)
       {
           complexe temp;
           temp.real = real + mycomp2.real;
           temp.img = img + mycomp2.img;
           return temp;
       }
};
int main()
{
    complexe mycomp1 , mycomp2 , resultcomp;
     float x;
     float y;
      float a;
     float b;
    cout << "enter real value" << "\n";
    cin >> x;
    cout << "enter img value " << "\n";
    cin >> y;
    mycomp1.setreal(x);
    mycomp1.setimg(y);
    cout << "enter real value" << "\n";
    cin >> a;
    cout << "enter img value " << "\n";
    cin >> b;
    mycomp2.setreal(a);
    mycomp2.setimg(b);
   resultcomp = mycomp1.printadd(mycomp2);
   resultcomp.printComplex ();
   resultcomp = mycomp1.printsub(mycomp2);
   resultcomp.printComplex ();
    return 0;
}
