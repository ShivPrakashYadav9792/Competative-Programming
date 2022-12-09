#include <iostream>
#include <math.h>
#include <iomanip>
//#include "solution.h"
using namespace std;
double geometricSum(int k)
{
    if(k==0)
    {
        return 1;
    }
        return 1/(pow(2,k))+geometricSum(k-1);
}
int main() {
    int k;
    cout<<"enter the number of term"<<endl;
    cin >> k;
    //cout << fixed << setprecision(5);
    cout << geometricSum(k) << endl;   
}
