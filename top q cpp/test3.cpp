#include<iostream>
using namespace std;
int main()
{
    int num,n,i,lar=-78456,j,Slar;
    cout<<"enter the n,umber of elments"<<endl;
    cin>>num;
    for(i=1;i<=num;i++)
    {
        cin>>n;
        
        if(lar<n)
        {
            lar=n;
        
        }
        
        {
            if(Slar!=lar)
             {
                Slar=n;

                }
        }
        

    }
    cout<<Slar;

    
    
    
}
