#include<iostream>
using namespace std;
#include<cmath>

int main() 
{
	int p,n,rst=1;
    cin>>p>>n;
    if(p==0&&n==0)
         cout<<"1";
    else{
    if(p>=0&&p<=8){
        if(n>=0&&n<=9){
          // rst=pow(p,n); 
            
            for(int i=1;i<=n;i++){
                rst=rst*p;
                
            }
                cout<<rst;
            }
            
        }
    }
        
}

