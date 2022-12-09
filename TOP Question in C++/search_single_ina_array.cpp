#include<iostream>
using namespace std;
int search(int *,int);
int main()
{
    int i;
    int arr[100];
    cout<<"enter the no of elments\n";
    int n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<search(arr,n)<<" ";
    
}
int search(int *arr,int size)
{
    int i,j,flag=0;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                flag++;
            }
        }
        if(flag==1)
        return arr[i];
        else
        return arr[i];
    }
    
}