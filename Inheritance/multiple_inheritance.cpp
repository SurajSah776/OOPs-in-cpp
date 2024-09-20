/*
    *** 4. Multiple Inheritance:

       - Definition: A derived class inherits from more than one base class.

       - Example: `class A + class B -> class C` (C inherits from both A and B).
*/

#include <bits/stdc++.h>
using namespace std;

// Base class 1: Person
class Person
{
protected:
    string name;
    string city;

public:
    // Constructor for Person
    Person(string name, string city)
    {
        this->name = name;
        this->city = city;
    }

    // Method to display Person's details
    void displayPersonInfo()
    {
        cout << "Name: " << name << endl;
        cout << "City: " << city << endl;
    }
};

// Base class 2: Employee
class Employee
{
protected:
    int empID;
    double salary;

public:
    // Constructor for Employee
    Employee(int empID, double salary)
    {
        this->empID = empID;
        this->salary = salary;
    }

    // Method to display Employee details
    void displayEmployeeInfo()
    {
        cout << "Employee ID: " << empID << endl;
        cout << "Salary: " << salary << endl;
    }
};

// Derived class: Intern (inherits from both Person and Employee)
class Intern : public Person, public Employee
{
private:
    string duration;

public:
    // Constructor for Intern
    Intern(string name, string city, int empID, double salary, string duration)
        : Person(name, city), Employee(empID, salary)
    {
        this->duration = duration;
    }

    // Method to display Intern details
    void displayInternInfo()
    {
        Person::displayPersonInfo();     // Call method from Person class
        Employee::displayEmployeeInfo(); // Call method from Employee class
        cout << "Internship Duration: " << duration << endl;
    }
};

// Driver code
int main()
{
    // Creating an Intern object
    Intern intern1("Suraj", "BBSR", 101, 40000, "6 months");

    // Displaying all the Information
    cout << "Intern Information: " << endl;
    intern1.displayInternInfo();

    return 0;
}
