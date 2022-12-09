#include<iostream>
//#include "Solution.h"
using namespace std;
int count(int n)
{
    if(n<10)
    {
        return 1;
    }
    return 1+count(n/10);
}

int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin >> n;
    cout << count(n) << endl;
}

/*
space complexity= o(log(n))
Time  complexity= o(log(n))
*/