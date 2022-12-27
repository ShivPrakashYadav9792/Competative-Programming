#include <iostream>
#include <string>
//#include "solution.h"
using namespace std;

string key[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
int keypad(int num, string output[]){
    /* Insert all the possible combinations of the integer number into the output string array. You do not need to
    print anything, just return the number of strings inserted into the array.
    */
        if(num==0)
        {
            output[0]="";
            return 1;
        }
        int opsize=keypad(num/10,output);
        string op[10000];
        for(int i=0;i<opsize;i++)
        {
            op[i]=output[i];
        }
        string concat=key[num%10];
        int l=0;
        for(int i=0;i<opsize;i++)
        {
            for(int j=0;j<concat.size();j++)
            {
                output[l++]= op[i]+concat[j];
            }
        }
        return l;
}

int main(){
    int num;
    cout<<"enter the number"<<endl;
    cin >> num;
    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}
