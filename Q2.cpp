#include<iostream>
using namespace std;
int main()
{
    int N,i,g,sum=0,mul=1;
    cin>>N;
    cin>>g;
    if(g==1)
    {
        for(i=1;i<=N;i++)
        {
            sum+=i;
        }
        cout<<sum<<endl;
    }
else if(g==2)
    {
        for(i=1;i<=N;i++)
        {
            mul*=i;
        }
        cout<<mul<<endl;
    }
    else
    cout<<"-1"<<endl;
}