/*
    *** 3. Hierarchical Inheritance ***

       - Definition: Multiple derived classes inherit from a single base class.

       - Example: `class A -> class B, class C, class D` (B, C, and D inherit from A).
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
    // Constructor for Person
    Person(string name, string city)
    {
        this->name = name;
        this->city = city;
    }

    // Method to display Person's details
    void displayPersonInfo()
    {
        cout << "Name  : " << name << endl;
        cout << "City  : " << city << endl;
    }
};

// Derived class for Employee
class Employee : public Person
{
protected:
    int id;
    double salary;
    string position;

public:
    // Constructor for Employee
    Employee(string name, string city, int id, double salary, string position)
        : Person(name, city)
    {
        this->id = id;
        this->salary = salary;
        this->position = position;
    }

    // Method to display Employee details
    void displayEmployeeInfo()
    {
        displayPersonInfo(); // Call base class method
        cout << "ID    : " << id << endl;
        cout << "Salary: " << salary << endl;
        cout << "Position: " << position << endl;
    }
};

// Derived class for Student
class Student : public Person
{
protected:
    int rollNo;
    string course;

public:
    // Constructor for Student
    Student(string name, string city, int rollNo, string course)
        : Person(name, city)
    {
        this->rollNo = rollNo;
        this->course = course;
    }

    // Method to display Student details
    void displayStudentInfo()
    {
        displayPersonInfo(); // Call base class method
        cout << "Roll No.: " << rollNo << endl;
        cout << "Course:   " << course << endl;
    }
};

// Driver code
int main()
{
    // Creating an Employee object
    Employee emp1("ABC", "XYZ", 1001, 100000, "Software Engineer");
    cout << "Employee Information: " << endl;
    emp1.displayEmployeeInfo();

    cout << endl;

    // Creating a Student object
    Student stu1("Suraj", "BBSR", 3469, "Computer Science");
    cout << "Student Information: " << endl;
    stu1.displayStudentInfo();

    return 0;
}
