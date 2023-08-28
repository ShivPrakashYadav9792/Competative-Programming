/*Friend Class:
It is similar to the friend function. A class can be made a friend of another class by
using the same keyword friend. Creating a class as a friend class, all the data
functions of the class becomes friend functions.
Kindly follow the code below for better understanding.
12*/
#include <iostream>
using namespace std;
class Bus
{
public:
    void print();
};
void test();
class Truck
{
private:
    int x;

protected:
    int y;

public:
    int z;
    /*friend class Bus; // Bus class declared as friend class to the Truck class
    */
    friend void Bus :: print(); // Invoking the print() using friend class
    friend void test(); // In short, making a friend function itself.
    
};
void Bus ::print()
{
    Truck t;
    t.x = 10;
    t.y = 20;
    cout << t.x << " " << t.y << endl;
}
void test()
{
    // Access truck private (Not Possible, hence gives the error of inaccessible privatevariables)
Truck t;
t.x = 10;
t.y = 20;
cout << t.x << " " << t.y << endl;
}
int main()
{
Bus b;
b.print();
test();
}