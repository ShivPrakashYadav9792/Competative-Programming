int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m=0;
	    cin>>n;
	   int  k=2*n;
	    long long int arr[k],arr1[k/2],arr2[k/2],o=0,p=0;
	    for(int i=0;i<k;i++)
	    {
	        cin>>arr[i];
	    }
	    int l=k/2;
	    for(int i=0;i<l;i++)
	    {
	        if(arr1[i]!=arr[i])
	        arr1[o]=arr[i];
	        o++;
	    }
	    for(int i=l+1;i<k;i++)
	    {
	        if(arr2[i]!=arr[i])
	        arr2[p]=arr[i];
	        p++;
	    }
	    for(int i=0;i<o;i++)
	    {
	        for(int j=l+1;j<p;j++)
	        {
	            if(arr1[i]==arr2[j])
	            {
	                m++;
	                
	            }
	            break;
	        }
	    }
	    if(m!=0)
	    {
	        cout<<"yes"<<endl;
	    }
	    else if(m)
	    {
	        cout<<"no"<<endl;
	    }
	    
	    
	}
	return 0;
}
