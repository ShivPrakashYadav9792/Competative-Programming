/*Now, suppose we have two classes, A and B where A is the base/parent class, and B
is the child/derived class. If the base class has a function named print() and a child
class of it also contains such a function, then this is a case of function overriding.
Here, we are deciding at the compile time about the function to be called. Look at
the code below:
*/
#include <iostream>
using namespace std;
class Vehicle
{
public:
    string color;
    void print()
    {
        cout << "Vehicle" << endl;
    }
};
class Car : public Vehicle
{
public:
    int numGears;
    void print()
    {
        cout << "Car" << endl;
    }
};
int main()
{
    Vehicle v;
    Car c;
    v.print();
    c.print();
    Vehicle *v1 = new Vehicle;
    Vehicle *v2;
    v2 = &c;
    v1->print(); // This will print Vehicle class’ print()
    v2->print(); // This will also print Vehicle class’ print() due to overriding
}