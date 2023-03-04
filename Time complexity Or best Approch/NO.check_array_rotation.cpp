
int arrayRotateCheck(int *input, int size)
{
    //Write your code here

    for(int i=0;i<size-1;i++){
      if (input[i] > input[i + 1]) {
        return i + 1;
      }
    }
    return 0;
}
#include <iostream>
using namespace std;

int main()
{

	int t;
    cout<<"enter the number of testcase"<<endl;
	cin >> t;
	while (t--)
	{

		int size;
        cout<<"enter the size"<<endl;
		cin >> size;
		int *input = new int[size];
        cout<<"enter the number of elements"<<endl;
		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << arrayRotateCheck(input, size) << endl;
		delete[] input;
	}
}
