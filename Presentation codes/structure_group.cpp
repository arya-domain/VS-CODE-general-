#include <iostream>
using namespace std;

struct employee // Declaring structure
{
        int id;     // Data members public by default
        string name;
        int salary;
} emp_1, emp_2;     // Multiple structure objects

struct staff : employee // Creating another structure which is inherited from employee
{
        int bonus;
}staff_1;

// Function declairation to display employee details
void display_employee(struct employee emp)
{
    cout << "Employee ID: " << emp.id << endl;
    cout << "Employee Name: " << emp.name << endl;
    cout << "Employee Salary: " << emp.salary << endl;
}

// Function declairation to display staff details
void display_staff(struct staff staff)
{
    cout << "Employee ID: " << staff.id << endl;
    cout << "Employee Name: " << staff.name << endl;
    cout << "Employee Salary: " << staff.salary << endl;
    cout << "Employee Bonus: " << staff.bonus << endl;
}

int main(){
    // Putting details of employee 1
    emp_1.id = 1;
    emp_1.name = "John";
    emp_1.salary = 100000;

    // Putting details of employee 2
    emp_2.id = 2;
    emp_2.name = "Jane";
    emp_2.salary = 200000;

    // Putting details of staff 1
    staff_1.id = 3;
    staff_1.name = "Smith";
    staff_1.salary = 300000;
    staff_1.bonus = 100000;

    // Displaying employee details
    display_employee(emp_1);
    cout<< "-----------------------------------------------------" << endl;
    display_employee(emp_2);
    cout<< "-----------------------------------------------------" << endl;

    // Displaying staff details
    display_staff(staff_1);
    return 0;
}
