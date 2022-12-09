#include<iostream>


using namespace std;

int main() {
	int n;
    cin>>n;
    //char c =65+n;
    char ch='A'+n;
    int i=1;
    while (i<=n)
    {
        ch=ch-i;
        //c=c-i;
        int j=1;
        while (j<=i)
        {
            cout<<ch;
            j++;
            ch++;
        }
        i++;
        cout<<endl;
    }
    
}
