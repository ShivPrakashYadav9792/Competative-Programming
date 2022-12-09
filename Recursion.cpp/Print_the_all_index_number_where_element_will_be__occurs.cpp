#include<iostream>
//#include "Solution.h"
using namespace std;

int i = 0;
int allIndexes(int input[], int size, int x, int output[]) {
  if (size == 0)
    return 0;
  else {
    int ans = allIndexes(input, size - 1, x, output);
    if (input[size - 1] == x) {
      output[i++] = size - 1;
      return i;
    } else {
      return i;
    }
  }
  }
  /************************************************************************/
int main(){
    int n;
    cout<<"enter the size of a array"<<endl;
    cin >> n;
    int *input = new int[n];
    cout<<"enter the elements  of an array"<<endl;
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    int x;
    cout<<"enter the elements which you want to search"<<endl;
    cin >> x;
    int *output = new int[n];
    cout<<"the outpot is:"<<endl;
    int size = allIndexes(input, n, x, output);
    for(int i = 0; i < size; i++) {
        cout << output[i] << " ";
    }
    //delete [] input;
    //delete [] output;
}


