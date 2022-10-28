#include<iostream>
using namespace std;

int main()
{
    long int a[1000000],n;
    cin>>n;
    for(int i=0;i<n;i++)
      cin>>a[i];
    int sum=0;
    for(int i=0;i<n;i++)
       sum=sum+a[i];
    cout<<sum<<endl;
}


