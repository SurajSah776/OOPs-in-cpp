/*
We can't directly access the private member variables of a class, but if we want to access them, we can do so with the help of Setter and Getter functions

Example:
*/

#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    int age;

public:
    string name;
    int rollNo;
    string branch;
    string course;

    void setData(string n, int r, string b, string c)
    {
        name = n;
        rollNo = r;
        branch = b;
        course = c;
    }

    // Setter Function
    void setAge(int a)
    {
        age = a;
    }

    // Getter Function
    int getAge()
    {
        return age;
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

    s1.setData("Suraj", 3469, "CSE", "B.Tech");

    // We can't access the 'age' directly :- error:age is inaccessible
    // s1.age = 21;

    // So we need to use setter function to set the value of variable 'age'
    s1.setAge(21);

    s1.getData();

    // We can access the private data members with the getter function
    cout << "Age    : " << s1.getAge() << endl;

    return 0;
}