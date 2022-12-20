#include <iostream>
//#include "solution.h"
using namespace std;
#include<cstring>
void pairStar(char input[]) {
    // Write your code here
	int l=strlen(input);
	int start=0;
	if(input[0]=='\0')
	{
		return;
	}
	 if(input[0]==input[1])
	{ int i;
		input[l+1]='\0';
                for (i = l; i > 0; i--) {
                  input[i + 1] = input[i];
                }
                input[i + 1] = '*';
         }
                return pairStar(input+1);
}


int main() {
   char input[100];
   cout<<"Enter the String"<<endl;
   cin.getline(input, 100);
   pairStar(input);
   cout <<input<< endl;
}
