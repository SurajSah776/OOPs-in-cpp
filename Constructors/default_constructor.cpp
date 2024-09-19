/*
        *** Constructor ***
 - Special function which is called once automatically by the compiler when Object is created.

Type:
  - Non-Parameterized Constructor
  - Parameterized Constructor
  - Copy Constructor
*/

// 1. Non - Parameterized Constructor

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

    void setData(string n, int r, string b, string c)
    {
        name = n;
        rollNo = r;
        branch = b;
        course = c;
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
    Student s1;

    s1.getData();

    s1.setData("Suraj", 3469, "CSE", "B.Tech");

    cout << "Student Roll Number : 2105" << s1.rollNo << endl;

    s1.getData();
    return 0;
}