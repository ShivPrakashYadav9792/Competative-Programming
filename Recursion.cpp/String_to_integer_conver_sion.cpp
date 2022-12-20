#include <iostream>
//#include "solution.h"
using namespace std;
#include<cmath>
#include<cstring>
int stringToNumber(char input[])
 {
    // Write your code here
	int len=strlen(input);
	int start=0;
        if(input[start]=='\0')
		{
          return 0;
    	} 
	 int b=input[start]-48;
     return b* pow(10, len -1)+stringToNumber(input+1);
	 /*int start=0;
	 int len=strlen(input)-1;
	 if(len==0)
		{
           return 0;
         }
		int k=input[len]-48;
		 return stringToNumber(input)*10+k;*/                                                                                                                                                                                                                                                              
                
}
int main() {
    char input[50];
    cout<<"entr the string"<<endl;
    cin >> input;
    cout << stringToNumber(input) << endl;
}
