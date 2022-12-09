/*#include<iostream>
using namespace std;

int main() {
	char ch;
    cout<<"enter the character";
    cin>>ch;
    if(ch>=65&&ch<=90)
        cout<<"1"<<endl;
    else if(ch>=97&&ch<=122)
        cout<<"0"<<endl;
    else
        cout<<"-1"<<endl;
	
}*/
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

