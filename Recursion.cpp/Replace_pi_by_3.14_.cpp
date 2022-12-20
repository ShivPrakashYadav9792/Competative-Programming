#include<cstring>
#include <iostream>
//#include "solution.h"
using namespace std;

/******************************************************/
void replacePi(char input[]) {
	// Write your code here
	int len=strlen(input);
       int start=0;
	   if(input[start]=='\0')
	   {
		   return;
	   }
	   else if(input[start]=='p'&&input[start+1]=='i')
	   {
             input[len+2]='\0';
				for(int i=len-1;i>=start+2;i--)
				{
					input[i+2]=input[i];
				}
								input[start]='3';
                                input[start + 1] = '.';
                                input[start + 2] = '1';
                                input[start + 3] = '4';
								return replacePi(input + 2);
         }
			else
           return replacePi(input + 1);
        }
/******************************************************/
int main()
 {
    //int n;
    //cout<<"enter the value of"<<endl;
   // cin>>n;
    char input[10000];
   // cout<<"enetr the stringh"<<endl;
    //cin.getline(input, n);
   /* for(int i=0;i<n;i++)
        { 
            cin.getline(input, n);
        }*/
    //cin>>input;
    replacePi(input);

    cout<<input<< endl;
}