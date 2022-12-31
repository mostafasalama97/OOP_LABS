#include <iostream>
using namespace std;
template <class T>
class Stack
{
    int tos;
    int sos;
    T * st;
    static int counter;
public:
    static int getCounter()
    {
        return counter;
    }
    Stack (T n)
    {
        sos= n;
        st=new T [sos];
        tos =0;
        counter++;
        cout<<"this is stack object number: "<<counter<<endl;
    }
    ~Stack ()
    {
        delete [] st;
        cout<<"This is the destructor"<<endl;
        counter--;
        cout<<"this is stack object number: "<<counter<<endl;
    }
    void push(T n)
    {
        if (tos == sos)
        {
            cout<<"stack is full"<<endl;
        }
        else
        {
            st[tos]=n;
            tos++;
        }
    }
    T pop()
    {
        int retVal;
        if (tos == 0)
        {
            cout<<"Stack is empty"<<endl;
            retVal = -1;
        }
        else
        {
            retVal = st[tos];
            tos--;
        }
    }
    void print()
    {
        int i=0;
        for (i=0; i<tos; i++)
        {
            cout<<st[i]<<endl;
        }
    }
};
template <class T>
int Stack<T>::counter=0;
int main()
{
    Stack<int> s1(5);
    s1.push(5);
    s1.push(14);
    s1.push(13);
    s1.push(6);
    s1.push(4);
    s1.pop();
    s1.print();
  Stack <char>s2(5);
    s2.push('t');
    s2.print();
    return 0;
}
