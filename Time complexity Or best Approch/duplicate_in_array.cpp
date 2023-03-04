int findDuplicate(int *arr, int n)
{
    //Write your code here
    int sum=0;
    for(int i=0;i<n;i++){
      sum+=arr[i];
    }
    //sum of elements from 0 to n-2;
    int sum2=((n-2)*(n-1))/2;
    int dif=sum-sum2;
    return dif;
}
#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while (t--)
	{
		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << findDuplicate(input, size) << endl;
	}

	return 0;
}