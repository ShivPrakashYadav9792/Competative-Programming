//find the position of smallest element in an array
/*#include<stdio.h>
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
            for(i=0;i<n;i++)
            {
                if(arr[i]<min)
                {
                    min=arr[i];
                    p=i;
                }
            
            }
            printf("%d",min);
            printf("\n%d",p);
            

    }*/


//find the position of second largest  element in an array
    #include<stdio.h>
int main()
    {
        int n,i,l,sl,p;
        printf("enter the size of an array");
        scanf("%d",&n);
        int arr[n];
        for(i=0;i<n;i++)
        {
            printf("\n arr[%d] =",i);
            scanf("%d",&arr[i]);
        }
            l=arr[0];
            for(i=0;i<n;i++)
            {
                if(l<arr[i])
                l=arr[i];
                
            }
            sl=arr[1];
            for(i=0;i<n;i++)
            {
                if(arr[i]!=l)
                {
                if(sl<arr[i])
                {
                sl=arr[i];
                p=i;
                }
                }

            }
            printf("%d",sl);
            printf("\n %d",p);
    }

