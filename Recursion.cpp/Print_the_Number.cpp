#include<iostream>
using namespace std;
//#include "Solution.h"
void print(int n)
{
    if(n==1)
        cout<<n<<endl;
    else 
        {
            print(n-1);
            cout<<n<<endl;
        }
}

int main(){
    int n;
    cout<<"enter the number "<<endl;
    cin >> n;
    print(n);
}
