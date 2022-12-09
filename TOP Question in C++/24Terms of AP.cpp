#include<iostream>
using namespace std;
int main()
{
    int N,i,flag,sum;
    cin>>N;
  flag=0;
    for(i=1;i<=N;i++)
        {
        
         sum=3*i+2;

            if(sum%4==0)
            {
                flag=1;
            }
        
        if(flag==0)
        {
            cout<<sum<<" ";
        }
        }
        
        
    
    
    
    
}