#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k,space;
    cout<<"enter the number"<<endl;
    cin>>n;
    i=n;
    int s=1;
    while(i>=1)
    {
        /*int s
        while(space<=n-i)
        {
            cout<<" ";
            space++;
        }*/
        int s=1;
        j=i;
        while((j<=i&&j!=0))
        {
            
            cout<<s;
            s++;
            j--;
        }
            
          int m=0;
                 while(m<2*(n-i))
                    {
                        cout<<"*";
                        m++;
                    }
           
    int l=i;
       int j=1;
        while((j<=i))
        {
            cout<<l;
            l--;
            j++;
        }

        


        i--;
        cout<<endl;
    }

}
