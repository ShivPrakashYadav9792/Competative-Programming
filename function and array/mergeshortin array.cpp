void merge(int *arr1, int size1, int *arr2, int size2, int *ans)
{
    //Write your code here
    int i1=0,i2=0,k=0;
    while(i1<size1&&i2<size2)
    {
    if(arr1[i1]<arr2[i2])
    {
     ans[k]=arr1[i1];
        i1++;
    }
    else
    {
    ans[k]=arr2[i2];
    i2++;
    }
    k++;
    }
    
    
     if(i1== size1)
    {
        while(i2<size2)
        {
             ans[k]=arr2[i2];
                i2++;
                k++;
        }  
    }

 
    else if(i2==size2)
        {
            while(i1<size1)
            {
                ans[k]=arr1[i1];
                    i1++;
                    k++;
            }  
        }
}