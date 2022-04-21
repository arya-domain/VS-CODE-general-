#include <iostream>
using namespace std;

class Employee {
  private:
    int salary;  // Private attribute

  public:
    void setSalary(int s)  // Setter
    {
      salary = s;
    }
    
    int getSalary()      // Getter
    {
      return salary;
    }
};

int main() 
{
  Employee myObj;
  myObj.setSalary(50000);
  cout << myObj.getSalary();
  return 0;
}