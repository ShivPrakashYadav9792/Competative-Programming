
bool checkMember(int n){

  /* Don't write main().
   * Don't read input, it is passed as function argument.
   * Return output and don't print it.
   * Taking input and printing output is handled automatically.
  */
    int f=0,s=1,fib;
    while(f<n)
    {
        fib=f+s;
        f=s;
        s=fib;
    }
        return f==n;  
    
}
