#include<iostream>
//#include "Solution.h"
using namespace std;
int lastIndex(int input[], int size, int x) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
  if (size == 0)
    return -1;
  else if (input[size-1] == x)
    return size-1;
  else {
    int m = lastIndex(input, size - 1, x);
    return m;
  }
}


int main(){
    int n;
    cout<<"enter the number of elemnts"<<endl;
    cin >> n;
    int *input = new int[n];
    cout<<"enter the  elemnts"<<endl;
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    cout<<"entet the value of  X"<<endl;
    cin >> x;
    
    cout << lastIndex(input, n, x) << endl;

}