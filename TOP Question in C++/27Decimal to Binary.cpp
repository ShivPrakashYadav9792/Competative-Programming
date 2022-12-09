#include<iostream>
using namespace std;
int main()
{
    long int n,temp,dec=0,rev=0,k=0,i=0;
    cin>>n;
    while (n>0)
    {
        temp=n%2;
        dec=dec*10+temp;
        n=n/2;k++;
    }
    while (dec>0)
    {
        temp=dec%10;
        rev=rev*10+temp;
        dec=dec/10;i++;
    }if(i<k)
    {
    while (i<k)
    {
        rev=rev*10;i++;
    }
    }
    cout<<rev;
}
