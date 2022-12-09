#include <iostream>
//#include "solution.h"
using namespace std;
int multiplyNumbers(int m, int n) {
    // Write your code here
    if (m == 0||n==0) {
      return 0;
    }
    int a =n+ multiplyNumbers( m-1, n) ;
    return a;
}


int main() {
    int m, n;
    cout<<"enter the value of m,n"<<endl;
    cin >> m >> n;
    cout << multiplyNumbers(m, n) << endl;
}
