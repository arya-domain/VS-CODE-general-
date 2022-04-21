#include <iostream>
using namespace std;


// Base class 1 
class Employee 
{
  protected: // Protected access specifier
    int salary;
};

// Base class 2 
class Company 
{
  public:
    int c_year;
    int setC_year(int c)
    {
      c_year = c;
      return c_year;
    }
};


// Derived class from one base class
// Single inheritance
class Programmer1: public Employee 
{
  public:
    int bonus;
    void setSalary(int s) {
      salary = s;
    }
    int getSalary() {
      return salary;
    }
};

// Derived class from atleast 2 base class
// Multiple inheritance
class Programmer2: public Employee , public Company
{

};

int main() 
{
  Programmer1 myObj;

  myObj.setSalary(50000);
  myObj.bonus = 15000;
  cout << "Salary: " << myObj.getSalary() << endl;
  cout << "Bonus: " << myObj.bonus << endl;

  Programmer2 myObj2;
  
  int a = myObj2.setC_year(1947);
  cout << "MUlti Inheritance :" << endl;
  cout << "Year : " << a;
;

  return 0;
}