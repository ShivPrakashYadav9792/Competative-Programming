#include <iostream>
using namespace std;

int fib(int n) {
	if (n == 0) {
		return 0;
	}

	if (n == 1) {
		return 1;
	}

	long long int smallOutput1 = fib(n - 1);
	long long int smallOutput2 = fib(n - 2);
	return smallOutput1 + smallOutput2;
}

int main() 
{    long long int n;
cout<<"enter the number et which fibbnnoci you want"<<endl;
    cin>>n;
	cout << fib(n) << endl;
}