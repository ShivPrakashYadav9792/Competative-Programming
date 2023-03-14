#include <iostream>
using namespace std;
//#include "Student.cpp"

class Student {
	public :
	int rollNumber;
	int age;
};
class Product {
	public :
	int id;
	int weight;
	char name[100];
};
int main() {
	// Create objects statically
	Student s1;
	Student s2;

	Student s3, s4, s5;

	s1.age = 24;
	s1.rollNumber = 101;

	cout << s1.age << endl;
	cout << s1.rollNumber << endl;

	s2.age = 30;


	// Create objects dynamicaaly
	Student *s6 = new Student;
	(*s6).age = 23;
	(*s6).rollNumber = 104;

	s6 -> age = 23;
	s6 -> rollNumber = 104;

}
