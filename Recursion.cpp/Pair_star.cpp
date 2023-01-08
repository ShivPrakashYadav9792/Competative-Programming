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


/*class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        
    long long int volume=length*width*height;
        int flag=0,flag1=0;
        if(length>=10000||width>=10000||height>=10000||volume>=1000000000)
                flag=1;   
         if(mass>=100)
            flag1=1;
         if(flag==0&&flag1==0)
             return "Neither";
          else if(flag==1&&flag1==1)  
              return "Both";
            else if(flag>flag1)
                return "Bulky";
            else 
                return "Heavy";
    }
};*/