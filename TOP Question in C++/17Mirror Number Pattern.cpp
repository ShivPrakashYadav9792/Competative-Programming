#include<iostream>
using namespace std;


int main(){
	int N,i,j,k=1;
    cin>>N;
    
    i=1;
    while(i<=N)
    {
        j=1;
        while(j<=N-i)
        {
            cout<<" ";
            j++;
        }
        k=1;
        while(k<=i)
        {
            
            cout<<k;
            k++;
        }
        cout<<endl;
        i++;
    }
     
    
  
}


