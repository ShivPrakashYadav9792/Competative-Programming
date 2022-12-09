int findUnique(int *arr, int size)
{
    //Write your code her
    int n,i,j;
    for(i=0;i<size;i++)
    {
        
        for(j=0;j<size;j++)
        {
    		if(i!=j&&arr[i]==arr[j])
                break;
        }
        if(j==size)
            return arr[i];
    }
}