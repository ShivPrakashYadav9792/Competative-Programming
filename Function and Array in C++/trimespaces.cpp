#include <iostream>
#include <cstring>
using namespace std;

//#include "solution.h";
void trimSpaces(char input[]) 
{
    // Write your code here
    int c=0,i,j=0,k;
    for(i=0;input[i]!='\0';i++)
    {
        c++;
    }
    for(i=0;i<c;i++)
    {
        if(input[i]!=' ')
        {
            input[j]=input[i];
            j++;
        }
    }
    input[j]='\0';
}

int main() {
    char input[1000000];
    cout<<"enter the string"<<endl;
    cin.getline(input, 1000000);
    trimSpaces(input);
    cout << input << endl;
}