#include<iostream>
using namespace std;
/***
You need to save all the subsets in the given 2D output array. And return the number of subsets(i.e. number of rows filled in output) from the given function.

In ith row of output array, 1st column contains length of the ith subset. And from 1st column actual subset follows.
For eg. Input : {1, 2}, then output should contain 
	{{0}, 		// Length of this subset is 0
	{1, 2},		// Length of this subset is 1
	{1, 1},		// Length of this subset is also 1
	{2, 1, 2}}	// Length of this subset is 2

Donât print the subsets, just save them in output.
***/
int sub(int input[],int size,int index,int output[][20])
{
	if(index==size)
	{
		output[0][0]=0;
			return 1;
	}
	int  opsize=sub(input,size,index+1,output);
        for (int i =opsize; i < 2 * opsize; i++)
		 {
			output[i][0]=output[i-opsize][0]+1;
        
					for(int j=1;j<=output[i][0];j++)
			{
                  if (j == 1) 
                    output[i][j] = input[index];
                 else 
				  output[i][j] = output[i - opsize][j - 1];
			}
    	 }
		 return 2*opsize;
}

int subset(int input[], int n, int output[][20])
 {
  // Write your code here
			int k= sub(input,n,0,output);
            return k;
  
}

int main() {
  int input[20],length, output[35000][20];
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];
  
  int size = subset(input, length, output);

  for( int i = 0; i < size; i++) { 
	for( int j = 1; j <= output[i][0]; j++) { 
		cout << output[i][j] << " ";
    }
    cout << endl;
  }
}
