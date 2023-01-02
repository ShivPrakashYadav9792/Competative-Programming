#include<iostream>
using namespace std;

 int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    else 
    {
          return n*fact(n-1);  
    }

}
int main()
{
    int  num;
    cout<<"enter the number"<<endl;
    cin>>num;
     //int k=fact(num);
     cout<<fact(num)<<endl;

}