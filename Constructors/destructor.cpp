/*
        *** Destructor ***
 -A destructor is a special member function that gets called automatically when an object is destroyed (either when it goes out of scope or when delete is called for dynamic objects).

 -Destructors are primarily used for cleanup, such as freeing dynamically allocated memory.

 - Only 1 Destructor can be there in a Class

 - Destructor can be private: If a destructor is private, the object cannot be deleted or go out of scope in the usual way. The class typically provides a public member function to destroy the object or uses smart pointers to manage its lifecycle.
 */
#include <iostream>
#include <cstring>
using namespace std;

class Student
{
public:
    string *name; // Pointer to dynamically allocate memory for name
    int rollNo;
    string *branch;

    // Parameterized Constructor
    Student(string name, int rollNo, string branch)
    {
        cout << "Constructor called!" << endl;
        this->name = new string(name); // Allocating memory dynamically
        this->rollNo = rollNo;
        this->branch = new string(branch); // Allocating memory dynamically
    }

    // Destructor
    ~Student()
    {
        cout << "Destructor called for student: " << *name << endl;
        // Freeing the allocated memory
        delete name;
        delete branch;
    }

    // Function to display Student data
    void getData()
    {
        cout << "Name   : " << *name << endl;
        cout << "Roll   : " << rollNo << endl;
        cout << "Branch : " << *branch << endl;
    }
};

int main()
{
    {
        // Creating a student object inside a scope
        Student student1("Suraj", 3469, "CSE");

        // Accessing student data
        student1.getData();
    } // student1 goes out of scope here, so the destructor will be called automatically

    cout << "Out of the scope, object destroyed!" << endl;

    return 0;
}
