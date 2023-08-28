#include <iostream>
using namespace std;

class MathOperations {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    MathOperations math;

    int sum1 = math.add(5, 7);
    double sum2 = math.add(3.14, 2.71);

    cout << "Sum of integers: " << sum1 << endl;
    cout << "Sum of doubles: " << sum2 << endl;

    return 0;
}
