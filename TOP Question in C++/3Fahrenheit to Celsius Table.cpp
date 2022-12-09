#include<iostream>
using namespace std;


int main(){

  int S,E,W;
    cin>>S>>E>>W;
    while(E>=S)
    {
        cout<<S<<" "<<((S-32)*5)/9<<endl;
        S=S+W;
    }
}


