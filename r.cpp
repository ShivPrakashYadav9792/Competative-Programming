#include<iostream>
using namespace std;
void faren_to_celsiou(int,int,int);
int main()
{
    int s,w,e;
    cin>>s;
    cin>>e;
    cin>>w;
    faren_to_celsiou(s,e,w);
}
void faren_to_celsiou(int s,int e,int w)
{
    int c;
    while(s<=e)
    {

        cout<<s<<" "<<((s-32)*5)/9<<endl;
        s=s+w;
    }
    
}