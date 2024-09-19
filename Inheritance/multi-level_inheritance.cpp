/*
    *** 2. Multi-Level Inheritance ***
    - Definition: A class is derived from another derived class, forming a chain of inheritance.

    - Example: `class A -> class B -> class C` (C inherits from B, which inherits from A).
*/
#include <bits/stdc++.h>
using namespace std;

// Base class
class Person
{
protected:
    string name;
    string city;

public:
    // Constructor
    Person(string name, string city)
    {
        this->name = name;
        this->city = city;
    }

    // Method to display Person's details
    void displayPersonInfo()
    {
        cout << "Name : " << name << endl;
        cout << "City : " << city << endl;
    }
};

// Derived class for Person
class Employee : public Person
{
protected:
    int id;
    double salary;
    string position;

public:
    // Constructor
    Employee(string name, string city, int id, double salary, string position) : Person(name, city)
    {
        this->id = id;
        this->salary = salary;
        this->position = position;
    }

    // Method to display Employee details including id, salary and position
    void displayEmployeeInfo()
    {
        Person::displayPersonInfo(); // Call base class method
        cout << "ID     : " << id << endl;
        cout << "Salary : " << salary << endl;
        cout << "Position: " << position << endl;
    }
};

// Derived class for Employee
class Manager : public Employee
{
protected:
    string dept;
    int teamSize;

public:
    // Constructor
    Manager(string name, string city, int id, double salary, string position, string dept, int teamSize) : Employee(name, city, id, salary, position)
    {
        this->dept = dept;
        this->teamSize = teamSize;
    }

    // Method to display Manager details including department and team size
    void displayManagerInfo()
    {
        Employee::displayEmployeeInfo();
        cout << "Department: " << dept << endl;
        cout << "Team Size : " << teamSize << endl;
    }
};

// Driver Code
int main()
{
    // Creating child class object
    Manager m1("Suraj", "BBSR", 101, 70000, "Manager", "Project Development", 9);

    // Displaying all the Information
    m1.displayManagerInfo();

    return 0;
}
