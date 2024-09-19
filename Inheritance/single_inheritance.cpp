/*
    *** Inheritance ***
-> Inheritance is a mechanism where one class (derived class) inherits properties and behavior (methods) from another class (base class).

-> It promotes code reusability and establishes a parent-child relationship between classes.


*** Types of Inheritance in C++ ***

    1. Single Inheritance:
       - Definition: A derived class inherits from only one base class.
       - Example: `class A -> class B` (B inherits from A).

    2. Multiple Inheritance
    3. Multilevel Inheritance
    4. Hierarchical Inheritance
    5. Hybrid Inheritance

*/

#include <iostream>
#include <string>
using namespace std;

// Base class
class Employee
{
protected:
    string name;
    int id;
    double salary;

public:
    // Constructor
    Employee(string name, int id, double salary)
    {
        this->name = name;
        this->id = id;
        this->salary = salary;
    }

    // Method to display employee details
    void displayDetails()
    {
        cout << "Name   : " << name << endl;
        cout << "ID     : " << id << endl;
        cout << "Salary : " << salary << endl;
    }
};

// Derived class for Full-Time Employees
class FullTimeEmployee : public Employee
{
private:
    double annualBonus;

public:
    // Constructor
    FullTimeEmployee(string name, int id, double salary, double annualBonus) : Employee(name, id, salary)
    {
        this->annualBonus = annualBonus;
    }

    // Method to display full-time employee details including bonus
    void displayDetails()
    {
        Employee::displayDetails(); // Call base class method
        cout << "Annual Bonus: " << annualBonus << endl;
    }
};

// Driver Code
int main()
{
    // Creating object of Derived Class
    FullTimeEmployee ftEmployee("Suraj", 100, 70000, 10000);
    cout << "\nFull-Time Employee Details:" << endl;
    ftEmployee.displayDetails();

    return 0;
}
