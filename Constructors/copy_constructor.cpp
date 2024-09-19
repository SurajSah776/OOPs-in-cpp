/*
        *** 3. Copy Constructor ***

Note: Compiler creates its own copy constructor if we do not explicitly define our own, it performs 'Shallow Copy'
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

    // Parameterized Constructor
    Student(string name, int rollNo, string branch, string course)
    {
        this->name = name;
        this->rollNo = rollNo;
        this->branch = branch;
        this->course = course;
    }

    // Copy Constructor
    Student(const Student &obj)
    {
        this->name = obj.name;
        this->rollNo = obj.rollNo;
        this->branch = obj.branch;
        this->course = obj.course;
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
    // Student-1
    Student s1("Suraj", 3469, "CSE", "B.Tech");
    cout << "\nStudent-1 Roll Number : 2105" << s1.rollNo << endl;
    s1.getData();

    // Student-2
    Student s2 = s1; // or s2(s1)
    s2.rollNo = 3400;
    s2.name = "Dharmraj";
    cout << "\nStudent-2 Roll Number : 2105" << s2.rollNo << endl;

    s2.getData();

    return 0;
}