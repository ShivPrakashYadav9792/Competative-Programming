#include<iostream>
using namespace std;


int main()
{
	int N,i,j;
    cin>>N;
    
    int temp=N;
    i=1;
    while(i<=N){
        j=1;
        while(j<=N-i+1){
            cout<<temp;
            j++;
        }
        temp--;
        i++;
        cout<<endl;
    }
  
}


