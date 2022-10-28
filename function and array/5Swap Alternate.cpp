void swapAlternate(int *arr, int n)
{
    //Write your code here
     
    
        if(n%2==0)
        {
        for(int j=0;j<n;)
          { int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
               j=j+2;
          }
        }
else
	{for(int j=0;j<n-1;)
          { int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
               j=j+2;
          }}
        
        
    
}