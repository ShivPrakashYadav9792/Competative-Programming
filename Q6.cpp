#include<iostream>
#include<cmath>
using namespace std;

int main()
{ int n,rem,i=1,sum=0;
cin>>n;
while(n!=0)
{
    rem=n%2;
    sum=sum+rem*i;
    i=i*10;
    n=n/2;
}
cout<<sum<<"";
}