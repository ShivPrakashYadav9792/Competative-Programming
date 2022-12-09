#include <iostream>
//#include "solution.h"
using namespace std;
int sumOfDigits(int n) {
    // Write your code here
    if(n<=9)
        return n;
    else{
        return (n%10)+sumOfDigits(n/10);
    }
}

int main() {
   int n;
   cout<<"enter the digit"<<endl;
   cin >> n;
   cout << sumOfDigits(n) << endl;
}
