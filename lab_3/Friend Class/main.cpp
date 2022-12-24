#include <iostream>

using namespace std;

class Class1 {
        int n1;
    public:
        Class1(int n)
        {
            n1 = n;
        }
    //friend class Class2;
};

class Class2 {
        int n2;
    public:
        Class2(int n)
        {
            n2 = n;
        }
        int add(Class1);
};

int main() {
    Class2 c2(5);
    Class1 c1(10);
    int x = c2.add(c1);
    cout << "Sum = " << x;
    return 0;
}

int Class2::add(Class1 n)
{
        return this->n2 + n.n1;
}
