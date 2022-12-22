#include <iostream>
using namespace std;

int main() {

	string* sp = new string;   //Dynamic Strings
	*sp = "def";
	cout << sp << endl;
	cout << *sp << endl;

	string s = "abc";
	//getline(cin, s);          used for teaking input with space;
	cout << s << endl;
	
	s = "defdef";
	cout << s[0] << endl;          // we  can print any words in string which we want //IT is treated as array also
	s[0] = 'a';
	string s1;
	s1 = "def";

	string s2 = s + s1;         //we can join two string using plue [+] sign
	cout << s2 << endl;

	s += s1;

	cout << s1 << endl;
	cout << s << endl;

	cout << s.size() << endl;   // size of string
	cout << s.substr(3) << endl;	// to find the sub string
	cout << s.substr(3, 3) << endl;	// to find the sub string from start point and end point

	cout << s.find("def") << endl;   //find the sub string where it is started in the string





}
