#include<iostream>
using namespace std;
int main()
{
    int N,i=1,sum;
    cin>>N;
    int x=1;
    while(x<=N)
        {
            sum=(3*i)+2;
            if(sum%4!=0)
            {
                cout<<sum<<" ";
                x++;
            }
            i++;

        }
        
        
    
    
    
    
}