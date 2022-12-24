#include <iostream>

using namespace std;

class Stack
{
    int size;
    int top;
    int * stk;
    static int counter;

public:
    Stack (int s = 6)
    {
        top = -1;
        size = s;
        stk = new int[size];
        counter ++;
    }

    ~Stack()
    {
        delete[] stk;
        counter --;
    }

    Stack(Stack &z);

    void Push(int);
    int Pop();

    static int getCounter()
    {
        return counter;
    }

    friend void viewContent(Stack);
    friend void viewContentRef(Stack &);

    Stack & operator = (const Stack & s);
};
int Stack::counter = 0;

int main()
{
    int size;
    cout << "Enter the size of stack = ";
    cin >> size;
    Stack stk1(size);
    Stack stk2(size);
    stk1.Push(1);
    stk1.Push(2);
    stk1.Push(3);
    stk1.Push(4);

    stk2.Push(5);
    stk2.Push(6);
    stk2.Push(7);
    stk2.Push(8);
    cout << stk2.Pop() << endl;

    stk2 = stk1;
    cout << stk2.Pop();
    return 0;
}

void Stack::Push(int n)
{
    if (top == size - 1)
    {
        cout << "Stack is FULL" << endl;
    }
    else
    {
        top ++;
        stk[top] = n;
    }
}

int Stack::Pop()
{
    int returnData;
    if (top == -1)
    {
        cout << "Stack is EMPTY" << endl;
        returnData = -1;
    }
    else
    {
        returnData = stk[top];
        top --;
    }
    return returnData;
}

void viewContent(Stack s)
{
    int i = 0;
    for (i = 0; i < s.top + 1; i++)
    {
        cout << "Stack element " << i << " = " << s.stk[i] << endl;
    }
}

void viewContentRef(Stack &s)
{
    int i = 0;
    for (i = 0; i < s.top + 1; i++)
    {
        cout << "Stack element " << i << " = " << s.stk[i] << endl;
    }
}

Stack::Stack(Stack &z)
{
    cout << "From copy constructor" << endl;
    this->top = z.top;
    this->size = z.size;
    stk = new int[size];
    int i = 0;
    for (i = 0; i < top + 1; i++)
    {
        this->stk[i] = z.stk[i];
    }
    counter ++;
    cout << "Count of objects = " << Stack::getCounter() << endl;
}

Stack &Stack::operator = (const Stack & s)
{
    delete[] this->stk;
    this->top = s.top;
    this->size = s.size;
    this->stk = new int[size];
    int i = 0;
    for (i = 0; i < s.top + 1; i++)
    {
        this->stk[i] = s.stk[i];
    }
}
