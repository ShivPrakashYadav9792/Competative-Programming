#include<iostream>
using namespace std;
int main()
    {
        int N,rem,sum=0;
        cin>>N;
        while(N!=0)
        {
            rem=N%10;
            sum=sum*10+rem;
            N=N/10;
            //sum=sum+rem*10;
        }
        cout<<sum<<"";

    }

