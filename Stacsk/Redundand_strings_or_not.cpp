#include <iostream>
#include <string>
using namespace std;

#include "solution.h"

int main() {
    string input;
    cin >> input;
    cout << ((checkRedundantBrackets(input)) ? "true" : "false");
}
#include<stack>
bool checkRedundantBrackets(string expression) {

	// Write your code here
	int n=expression.size();
	stack<int>ans;
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(expression[i]==')')
		{
				if(ans.top()=='('){
					return true;
				}

                  while (!ans.empty())
				   {

					   	if(ans.top()=='('){
							 ans.pop();
							 break;
						   }

                    ans.pop();
                    count++;
                   }
				  if(count<=1)
				  return true;
        }
		else
		 {
			count=0;
			ans.push(expression[i]);
		 }
	}
	return false;
}
