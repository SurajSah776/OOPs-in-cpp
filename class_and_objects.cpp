/* Class and Objects
  - Class is a Blueprint of real world entities(Objects)
  - Object is an instance of a class/Objects are the entities in the Real World
*/

// Example to Create a Class and Objects

#include <bits/stdc++.h>
using namespace std;

// Creating a class names "Student"
class Student
{
public:
    // Data Members/Attributes
    string name;
    int rollNo;
    string branch;
    string course;

    // Member Functions / Methods
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
    // Creating Object
    Student s1;

    // Populating the Object with user data
    s1.setData("Suraj", 3469, "CSE", "B.Tech");

    cout << "Student Roll Number : 2105" << s1.rollNo << endl;

    // Displaying the User data
    s1.getData();
    return 0;
}