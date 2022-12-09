void arrange(int *arr, int n)
{
    //write your code here
     int value=1;
    int start=0,end=n-1;
    while(start<=end)
    {
        
        if(value%2==1)
        {arr[start]=value;
        start++;
        value=value+1;
        }
        else
        {
        arr[end]=value;
        value =value+1;
        end--;
        }
    }
    
}