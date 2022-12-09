#include<iostream>
//#include "Solution.h"
using namespace std;
int power(int x,int n)
{
    if(n==0)
    {
        return 1;
    }
    return x*power(x,n-1);
}
int main()
{
    int x, n;
    cout<<"enter the valeu of x and n"<<endl;
    cin >> x >> n;
    cout << power(x, n) << endl;
}
/*
space complexity= o(n)
Time  complexity= o(n)
*/
