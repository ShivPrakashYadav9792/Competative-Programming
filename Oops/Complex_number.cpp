#include <iostream>
using namespace std;
class ComplexNumbers {
    // Complete this class
    private:
    int real1;
    int imaginary1;
    public:
      ComplexNumbers(int real1,int imaginary1)
      {
          this->real1=real1;
          this->imaginary1=imaginary1;
      }
void plus(ComplexNumbers const &c2)
{
    real1=real1+c2.real1;
    imaginary1=imaginary1+c2.imaginary1;
}
void multiply(ComplexNumbers const &c2)
{
    int c=real1;
    real1=real1*c2.real1-(imaginary1*c2.imaginary1);
    imaginary1=imaginary1*c2.real1+(c*c2.imaginary1);
}
void print()
      {
          cout<<this->real1<<"+"<<imaginary1<<"i"<<endl;
      }
};

int main() {
    int real1, imaginary1, real2, imaginary2;
    cout<<"enter the input"<<endl;
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;
    
    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);
     cout<<"enter the choice"<<endl;
    int choice;
    cin >> choice;
    
    if(choice == 1) {
        c1.plus(c2);
        c1.print();
    }
    else if(choice == 2) {
        c1.multiply(c2);
        c1.print();
    }
    else {
        return 0;
    }   
}