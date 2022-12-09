#include<iostream>
//#include "Solution.h"
using namespace std;
bool checkNumber(int input[], int size, int x) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
if(size==0)
{
 return false;
}
if(input[0]==x)
{
  return true;
}
bool is_check=checkNumber( input+1, size-1, x);
return  is_check;

}


int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin >> n;

    int *input = new int[n];
    cout<<"enter the elements"<<endl;
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    cout<<"enter the number for searching"<<endl;
    cin >> x;
    
    if(checkNumber(input, n, x)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}
