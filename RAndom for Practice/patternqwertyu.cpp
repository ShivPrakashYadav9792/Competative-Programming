#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<30*n;i++){
        for(int j=0;j<2*n-i*j;j++){
            cout<<" 88 ";
        }
        cout<<endl;
    }
}
