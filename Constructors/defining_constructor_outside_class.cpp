/*
This program demonstrates the concept of defining constructors and/or methods outside the class in C++.

1. The `Student` class has both a default constructor and a parameterized constructor, declared inside the class.

2. The constructors and getdata() method are defined outside the class using the scope resolution operator (::).
*/

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int rollNo;
    string branch;
    string course;

    // Declare Default Constructor
    Student();

    // Declare Parameterized Constructor
    Student(string name, int rollNo, string branch, string course);

    void getData();
};

// Defining constructors outside the class
Student::Student()
{
    cout << "Constructor Called!!" << endl;
    name = "";
    rollNo = 0;
    branch = "";
    course = "";
}

Student::Student(string name, int rollNo, string branch, string course)
{
    this->name = name;
    this->rollNo = rollNo;
    this->branch = branch;
    this->course = course;
}

// Defining the method outside class
void Student::getData()
{
    cout << "Name   : " << name << endl;
    cout << "Roll   : " << rollNo << endl;
    cout << "Branch : " << branch << endl;
    cout << "Course : " << course << endl;
}

// Driver Code
int main()
{
    Student s1("Suraj", 3469, "CSE", "B.Tech");
    cout << "Student Roll Number : 2105" << s1.rollNo << endl;

    s1.getData();
    return 0;
}