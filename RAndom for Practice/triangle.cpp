#include<iostream>
using namespace std;
int main()
{int n;
cin>>n;
int i=0;
int k=1;
int m=1;
while(i<n)
{
    int space=1;
    while(space<n-i+1)
    {
        cout<<" ";
        space++;
    }
    int j=1;
    int k=i;
    while(j<=i)
    {
        cout<<k;
        j++;
        k++;
    }
    int m=2*i-2;
    int l=2;
    while(l<=i)
    {cout<<m;
    l++;
    m--;
    
    


    }


cout<<endl;
i++;
}

}
