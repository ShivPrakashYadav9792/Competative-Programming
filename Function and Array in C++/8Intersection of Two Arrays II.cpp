
#include<climits>
void intersection(int *input1, int *input2, int size1, int size2)
{
    //Write your code here
    int i,j;
    for(i=0;i<size1;i++)
    { 
        for(j=0;j<size2;i++)
        {
            if(input1[i]==input2[j])
            {
                cout<<input1[i]<<" ";
                input2[j]=INT_MIN;
                break;
            }
        }
      
    }
}
