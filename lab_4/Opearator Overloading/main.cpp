#include <iostream>

using namespace std;

class Complex
{
    float real;
    float imag;

public:
    Complex()
    {
        real = 0;
        imag = 0;
    }

    Complex(float r)
    {
        real = imag = r;
    }

    Complex(float r, float i)
    {
        real = r;
        imag = i;
    }

    ~Complex()
    {
        //cout << "Object has been deleted" << endl;
    }

    void setReal();
    void setImag();

    float getReal();
    float getImag();

    Complex addComplex(Complex *);
    Complex subComplex(Complex *);

    void printComplex();

    void setComplex(int, int);

    Complex operator + (Complex c);
    Complex operator - (Complex c);
    Complex operator + (float x);
    Complex operator - (float x);
    friend Complex operator + (float, Complex);
    friend Complex operator - (float, Complex);
    int operator == (Complex c);
    Complex operator += (Complex c);
    Complex operator ++ ();
    Complex operator ++ (int);
    Complex operator -- ();
    Complex operator -- (int);
    operator float();
};

int main()
{
    Complex comp1(2,4), comp2(5,6), Result;
    int x=0;
    comp1.printComplex();
    comp2.printComplex();

    Result = comp1 + comp2;
    cout << "Complex1 + Complex2 = ";
    Result.printComplex();
    cout << endl;

    Result = comp1 - comp2;
    cout << "Complex1 - Complex2 = ";
    Result.printComplex();
    cout << endl;

    Result = comp1 + 6;
    cout << "Complex1 + x = ";
    Result.printComplex();
    cout << endl;

    Result = comp1 - 5;
    cout << "Complex1 - x = ";
    Result.printComplex();
    cout << endl;

    Result = 8 + comp1;
    cout << "x + Complex1 = ";
    Result.printComplex();
    cout << endl;

    Result = -5 - comp1;
    cout << "x - Complex1 = ";
    Result.printComplex();
    cout << endl;

    x = (comp1 == comp2);
    cout << "Complex1 == Complex2 : ";
    cout << x << endl;
    cout << endl;

    comp1 += comp2;
    cout << "Complex1 += Complex2 = ";
    comp1.printComplex();
    cout << endl;

    Result = comp1 ++;
    cout << "Result = Complex1 ++ : " << endl;
    cout << "Complex1 = ";
    comp1.printComplex();
    cout << "Result = ";
    Result.printComplex();
    cout << endl;

    Result = ++ comp1;
    cout << "Result = ++ Complex1 : " << endl;
    cout << "Complex1 = ";
    comp1.printComplex();
    cout << "Result = ";
    Result.printComplex();
    cout << endl;

    cout << "Result = Complex1 -- : " << endl;
    Result = comp1 --;
    cout << "Complex1 = ";
    comp1.printComplex();
    cout << "Result = ";
    Result.printComplex();
    cout << endl;

    cout << "Result = -- Complex1 : " << endl;
    Result = -- comp1;
    cout << "Complex1 = ";
    comp1.printComplex();
    cout << "Result = ";
    Result.printComplex();
    cout << endl;

    x = (float) comp1;
    cout << "(float) Complex = " << x << endl;
    return 0;
}

void Complex::setReal()
{
    int r;
    cout << "Enter real part of complex : ";
    cin >> r;
    this->real = r;
}

void Complex::setImag()
{
    int i;
    cout << "Enter imaginary part of complex : ";
    cin >> i;
    this->imag = i;
}

float Complex::getReal()
{
    cout << "Real part of complex = " << this->getReal() << endl;
    return real;
}

float Complex::getImag()
{
    cout << "Real part of complex = " << this->getImag() << endl;
    return imag;
}

Complex Complex::addComplex(Complex * a)
{
    Complex temp;
    temp.real = this->real + a->real;
    temp.imag = this->imag + a->imag;
    return temp;
}

Complex Complex::subComplex(Complex * b)
{
    Complex temp;
    temp.real = this->real - b->real;
    temp.imag = this->imag - b->imag;
    return temp;
}

void Complex::printComplex()
{
    if (imag < 0)
    {
        cout << real << " - " << abs(imag) << "i" << endl;
    }
    else
    {
        cout << real << " + " << imag << "i" << endl;
    }
}

void Complex::setComplex(int r, int i)
{
    this->real = r;
    this->imag = i;
}

Complex Complex::operator + (Complex c)
{
    Complex temp;
    temp.real = this->real + c.real;
    temp.imag = this->imag + c.imag;
    return temp;
}

Complex Complex::operator - (Complex c)
{
    Complex temp;
    temp.real = this->real - c.real;
    temp.imag = this->imag - c.imag;
    return temp;
}

Complex Complex::operator + (float x)
{
    Complex temp;
    temp.real = this->real + x;
    temp.imag = this->imag;
    return temp;
}

Complex Complex::operator - (float x)
{
    Complex temp;
    temp.real = this->real - x;
    temp.imag = this->imag;
    return temp;
}

Complex operator + (float i, Complex c)
{
    Complex temp;
    temp.real = i + c.real;
    temp.imag = c.imag;
    return temp;
}

Complex operator - (float i, Complex c)
{
    Complex temp;
    temp.real = i - c.real;
    temp.imag = c.imag;
    return temp;
}


int Complex::operator == (Complex c)
{
    if (this->real == c.real && this->imag == c.imag)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

Complex Complex::operator += (Complex c)
{
    this->real = this->real + c.real;
    this->imag = this->imag + c.imag;
    return * this;
}

Complex Complex::operator ++ ()
{
    this->real ++;
    return * this;
}

Complex Complex::operator ++ (int)
{
    Complex temp = * this;
    this->real ++;
    return temp;
}

Complex Complex::operator -- ()
{
    this->real --;
    return * this;
}

Complex Complex::operator -- (int)
{
    Complex temp = * this;
    this->real --;
    return temp;
}

Complex::operator float()
{
    return this->real;
}
