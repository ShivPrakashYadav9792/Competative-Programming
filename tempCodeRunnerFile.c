#include<stdio.h>
int main()
    {
        int n,i,p=0,min;
        printf("enter the size of an array");
        scanf("%d",&n);
        int arr[n];
        for(i=0;i<n;i++)
        {
            printf("\n arr[%d] =",i);
            scanf("%d",&arr[i]);
        }
min=arr[0];