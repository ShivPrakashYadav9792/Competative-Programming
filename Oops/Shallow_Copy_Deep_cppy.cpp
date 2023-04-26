#include<iostream>
#include<cstring>
using namespace std;
class student{
    int age;
    char *name;
    public:
    student(int age,char*name){
        this->age=age;
        //this->name=name;// shallow copy;
        //deep copy
        this->name= new char[strlen(name)+1];
        strcpy(this->name,name);
    }
    void display(){
        cout<<name<<" "<<age<<endl;
    }
};
int main(){
    char name[]="abcd";
    student s1(29,name);
    s1.display();
    name[3]='e';
    student s2(299,name);
    s2.display();
    s1.display();
}