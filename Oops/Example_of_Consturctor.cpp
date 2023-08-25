#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "Constructor of A" << endl;
    }
};

class B : public A
{
public:
    B()
    {
        cout << "Constructor of B" << endl;
    }
};

class C : public B
{
public:
    C()
    {
        cout << "Constructor of C" << endl;
    }
};

int main()
{
    C objectC;
    return 0;
}
