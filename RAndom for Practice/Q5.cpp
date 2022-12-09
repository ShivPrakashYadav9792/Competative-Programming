#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,rem,count=0,num,sum=0;
	cin>>n;
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        num=rem*pow(2,count);
        sum=sum+num;
        count++;
        
    }
	cout<<sum<<"";
}
