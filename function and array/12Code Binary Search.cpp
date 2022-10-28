int binarySearch(int *input, int n, int val)
{
    //Write your code here
    
    int start=0,end=n-1;
    while(start<=end)
    {
        int mid=((start+end)/2);
        
    	if(input[mid]==val)
        {
            return mid;
        }
        else if(val<input[mid])
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
        
    }
    return -1;
}