#include <iostream>
using namespace std;

int main() {
   
int n,i,j,k;
    cin>>n;
    i=1;
    while(i<=n)
    {
        j=1;
        while(j<=n-i)
        {
            cout<<" ";
            j++;
        }
        j=1;k=i-1;int l=i;
        while(j<=2*i-1)
        {
            if(l>=j)
            {
                k++;
                cout<<k;
            }
            else{
                k--;
                cout<<k;
                 }
        j++;
        }
        i++;
        cout<<endl;
    }
}      
