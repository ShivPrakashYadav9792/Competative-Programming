#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,i,j;
    cin>>n;
    for( i=1;i<=n+1;i++)
    {
        
        for( j=n;j>=i;j--)
        {
            cout<<" ";
        }
          cout<<"*";
        for( j=1;j<=i;j++)
        {
            cout<<"5";
        }
        for( j=i+1;j>=1;j--)
        {
            cout<<"5";
        }
        cout<<"*";
        cout<<endl;
        
    }

    for( i=1;i<=n;i++)
    {
        
        for( j=1;j<=i;j++)
        {
            cout<<" ";
        }
          cout<<"*";
        
        cout<<endl;
        
    }
    return 0;
}
