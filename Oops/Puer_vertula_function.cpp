#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw() = 0; // प्योर वर्चुअल फंक्शन
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
    Circle circle;
    Square square;

    Shape *shape1 = &circle;
    Shape *shape2 = &square;

    shape1->draw(); // Circle का draw() कॉल होगा
    shape2->draw(); // Square का draw() कॉल होगा

    return 0;
}
