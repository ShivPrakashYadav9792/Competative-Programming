#include <iostream>
using namespace std;
int staircase(int n) {
  /* Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Return output and don't print it.
   *  Taking input and printing output is handled automatically.
   */
           int x,y,z;
        if(n==0)
        {
          return 1;
        }
        else if(n<0)
        {
          return 0;
        }
        else 
        {
           x=staircase(n-1);
           y=staircase(n-2);
           z=staircase(n-3);
        }
        return x+y+z;
}
int main() {
    int n, output;
    cout<<"enter thr value of n"<<endl;
    cin >> n;
    output=staircase(n);
    cout<< output <<endl;
}
