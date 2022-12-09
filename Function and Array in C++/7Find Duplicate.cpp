int duplicateNumber(int *arr, int size)
{
    //Write your code here
	int i,j,flag;
    for(i=0;i<size;i++)
    {   flag=0;
        for(j=0;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
            	flag++;
            }
   		}
     if(flag==2)
         return arr[i];
                
        }
        
}