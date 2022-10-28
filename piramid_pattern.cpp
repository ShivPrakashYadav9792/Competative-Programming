#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter the number N";
cin>>n;
int i=1;
while(i<=n)
    {
        int space=1;
        while(space<=n-i)
                {
                    cout<<" ";
                    space++;
                }

            int j=1;
            while(j<=(2*i-1))
                    {
                        cout<<"*";
                        j++;
                        
                        
                    }
                    
    cout<<endl;
    i++;


    }








}