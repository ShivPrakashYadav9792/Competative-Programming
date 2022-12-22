#include<iostream>
using namespace std;
int dp[1000];
int fibo(int n){
    if(n==0||n==1){
        return dp[n]=n;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    dp[n]= fibo(n-1)+fibo(n-2);
    return dp[n];
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n+1;i++){
        dp[i]=-1;
    }
    for(int i=0;i<n;i++){
        cout<<i<<" "<<fibo(i)<<endl;
    }
}