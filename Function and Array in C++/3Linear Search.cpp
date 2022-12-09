int linearSearch(int *arr, int n, int x)
{ 
    int count=0;
    int i;
    for(i=1;i<=n;i++){
        if(arr[i]==x){
            count++;
            break;
        }
        
    }
    if(count==1)
        return (i);
    else
        return -1;
        
}
    