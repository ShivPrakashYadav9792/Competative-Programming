#include <iostream>
using namespace std;
#include "Stack_Using_Template.cpp"

int main() {
	StackUsingArray<int>s;
	s.push(100);
	s.push(101);
	s.push(102);
	s.push(103);
	s.push(104);
	cout << s.top() << endl;

	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;

	cout << s.size() << endl;

	cout << s.isEmpty() << endl;
StackUsingArray<char>a;
	a.push(100);
	a.push(101);
	a.push(102);
	a.push(103);
	a.push(104);
	cout << a.top() << endl;

	cout << a.pop() << endl;
	cout << a.pop() << endl;
	cout << a.pop() << endl;

	cout << a.size() << endl;

	cout << a.isEmpty() << endl;

}

