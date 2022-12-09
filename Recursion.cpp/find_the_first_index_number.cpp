#include<iostream>
//#include "Solution.h"
using namespace std;
int firstIndex(int input[], int size, int x)
{
    if(size==0)
    {
        return -1;
    }
    if(input[0]==x)
    {
        return 0;
    }
    int ans=firstIndex(input+1,size-1,x);
    if(ans!=-1)
    {
        return ans+1;
    }
    else 
    return ans;

}
int main(){
    int n;
      cout<<"enter the number of elements"<<endl;
    cin >> n;
    int *input = new int[n];
    cout<<"the input are"<<endl;
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    cout<<"enter the value for searching"<<endl;
    int x;
    
    cin >> x;
    
    cout << firstIndex(input, n, x) << endl;

}