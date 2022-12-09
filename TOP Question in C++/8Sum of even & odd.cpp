#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int N,d,evenSum=0,oddSum=0;
    cin>>N;
    
    while(N>0){
    	d=N%10;
        N=N/10;
        if(d%2==0)
            evenSum=evenSum+d;
        else
            oddSum=oddSum+d;
    }
    cout<<evenSum<<" "<<oddSum<<endl;

}
