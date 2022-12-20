#include<iostream>
using namespace std;
void removeConsecutiveDuplicates(char *input) {
	
       if(input[0]=='\0')
	   {
		   return;
	   }

	  else  if(input[0]!=input[1])
	   {
		   	return removeConsecutiveDuplicates(input+1);
	   }
	   else 
	   {
		   int i;
		   for(i=1;input[i]!='\0';i++)
		   {
			   input[i-1]=input[i];
		   }
		   input[i-1]=input[i];//null char
              return  removeConsecutiveDuplicates(input);
	   }

   
}

int main() {
    char s[100000];
    cout<<"enter the  String"<<endl;
    cin >> s;
    removeConsecutiveDuplicates(s);
    cout << s << endl;
}