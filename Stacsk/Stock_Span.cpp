
#include <iostream>
#include <stack>
using namespace std;

void calculateSpan(int prices[], int n, int spans[]) {
  stack<int>ans;
  ans.push(0);
 // int arr[size];
  spans[0]=1;
  for(int i=1;i<n;i++){
      while(!ans.empty()&&prices[ans.top()]<prices[i])
                  ans.pop();
                  if(ans.empty())
                  spans[i]=i+1;
                  else {
                      spans[i]=i-ans.top();
                  }
        ans.push(i);
}
}

int main() {
    int n;
    cin >> n;

    int* prices = new int[n];
    for (int i = 0; i < n; i++)
        cin >> prices[i];

    int* spans = new int[n];
    calculateSpan(prices, n, spans);

    for (int i = 0; i < n; i++)
        cout << spans[i] << " ";

    delete[] prices;
    delete[] spans;

    return 0;
}