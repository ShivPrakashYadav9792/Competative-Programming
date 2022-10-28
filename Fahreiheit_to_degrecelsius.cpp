#include<iostream>
using namespace std;


int main(){
int S,E,W;
cout<<"enter the values of S,E,W"<<endl;
  
    cin>>S>>E>>W;
    while(E>=S)
    {
        cout<<S<<" "<<((S-32)*5)/9<<endl;
        S=S+W;
    }
}


