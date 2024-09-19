/*
        *** 2. Parameterized Constructor ***

 Note: We can have Multiple Parameterized constructor in a class i.e. Overloaded Constructor

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

    // Non-Parameterized Constructor/Default Constructor
    Student()
    {
        cout << "Constructor Called!!" << endl;
        name = "";
        rollNo = 0;
        branch = "";
        course = "";
    }

    // Parameterized Constructor
    Student(string name, int rollNo, string branch, string course)
    {
        this->name = name;
        this->rollNo = rollNo;
        this->branch = branch;
        this->course = course;
    }

    void getData()
    {
        cout << "Name   : " << name << endl;
        cout << "Roll   : " << rollNo << endl;
        cout << "Branch : " << branch << endl;
        cout << "Course : " << course << endl;
    }
};

// Driver Code
int main()
{
    Student s1("Suraj", 3469, "CSE", "B.Tech");
    cout << "Student Roll Number : 2105" << s1.rollNo << endl;

    s1.getData();
    return 0;
}