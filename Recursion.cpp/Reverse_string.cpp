#include<string>
#include<iostream>
using namespace std;

void reverse(string name)
{
    if(sizeof(name)==0)
    {
        return;
    }e
    string roe=name.substr(1);
    reverse(roe);
    cout<<name[0];
}
int main()
{
    string name;
    cin>>name;
    reverse(name);

}