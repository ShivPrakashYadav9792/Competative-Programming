/*Virtual function ek C++ programming concept hai jo run-time polymorphism (dynamic polymorphism) 
ko enable karta hai. Virtual functions derived classes mein override kiye ja sakte hain, aur jab derived
 class ka object base class ke pointer se call kiya jata hai, toh us object ke actual type ke corr
 esponding virtual function execute hoti hai.

Virtual functions base class mein virtual keyword ke saath declare ki jati hain, aur derived class 
mein unko override kiya jata hai. Isse function overriding hoti hai, jisse run-time polymorphism ka 
concept possible hota hai.*/
#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw()
    {
        cout << "Drawing a shape" << endl;
    }
};

class Circle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing a circle" << endl;
    }
};

class Square : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing a square" << endl;
    }
};

int main()
{
    Shape *shape1 = new Circle;
    Shape *shape2 = new Square;

    shape1->draw(); // Calls Circle's draw() due to dynamic binding
    shape2->draw(); // Calls Square's draw() due to dynamic binding

    delete shape1;
    delete shape2;

    return 0;
}
