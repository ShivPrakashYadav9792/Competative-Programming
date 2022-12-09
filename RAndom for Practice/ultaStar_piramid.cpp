#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int i=1;
    while(i<=n)
        {
            int space=1;
            while(space<=i)
                {
                    cout<<" ";
                    space++;
                
                }
                int j=1;
                    while(j<=n-i+1)
                    {
                        cout<<"*";
                        j++;
                    }
                    int k=1;
                    while(k<=n-i)
                    {
                        cout<<"*";
                        k++;
                    }
                    cout<<endl;
                    i++;



        }

        
        
}
