#include<iostream>
//#include "Solution.h"
using namespace std;
int sum(int input[], int n) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
  int su;
  if(n==0)
  return 0;
  su=input[0];
  return su + sum(input +1, n-1);
}

int main()
{
    int n;
    cout<<"enter the number of elements"<<endl;
    cin >> n;
    int *input = new int[n];
    cout<<"enter the elements"<<endl;
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    cout << "sum  = "<<sum(input, n) << endl;
}
