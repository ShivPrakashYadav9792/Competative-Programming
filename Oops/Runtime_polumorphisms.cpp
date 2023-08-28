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
    virtual void print()
    { // function made virtual
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
    v2->print(); // This will now print car class’ print() due to virtual function
}