#include <iostream>
//#include "solution.h"
using namespace std;
int length(char input[])
{
     int len=0;
    for(int i=0;input[i]!='\0';i++)
    {
        len++;
    }
    return len;
}
int checkPalindrome_helper(char input[],int start,int end)
{
    if(input[0]=='\0'||input[1]=='\0')
    {
        return 1;
    }
    if(start>=end)
    {
        return 1;
    }
    if(input[start]==input[end])
    {
        return checkPalindrome_helper(input,start+1,end-1);
    }
    else 
    {
        return 0;
    }
}
    int checkPalindrome(char input[])
    {
        int len=length(input);
        return checkPalindrome_helper(input,0,len-1);
    }

int main() {
    char input[50];
    cout<<"enter the string"<<endl;
    cin >> input;
    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}
