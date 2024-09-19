/*
        *** Constructor as 'private' ***
A 'private constructor' is typically used in design patterns like the 'Singleton' pattern, where we want to restrict object creation from outside the class.
*/

#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;

    // Private Constructor
    Student(string name, int rollNo)
    {
        this->name = name;
        this->rollNo = rollNo;
        cout << "Private Constructor Called! Student Created." << endl;
    }

public:
    // Static method to create an object
    static Student createStudent(string name, int rollNo)
    {
        return Student(name, rollNo);
    }

    void showData()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

// Driver Code
int main()
{
    // Creating an object using the static method
    Student s1 = Student::createStudent("Suraj", 3469);
    s1.showData();

    // We can't do this: Student s2("Suraj", 2105); -> This will give an error
    return 0;
}

/*
This program demonstrates the use of a private constructor in a simple class:

1. The `Student` class has a private constructor, so objects cannot be created directly using the constructor.

2. A static method `createStudent()` is used to allow controlled creation of objects from outside the class.

3. The constructor initializes the `name` and `rollNo` members and displays a message when it's called.

4. In the `main()` function, we create a `Student` object using the static method and display the student's details using `showData()`.

#Key Points:
 *Private Constructor : Prevents the creation of objects directly using Student s2("Suraj", 2105);

 *Static Method : Provides a controlled way to create an object by calling createStudent().

 *Controlled Access : Object creation is controlled through a static method.

This pattern is useful when only one instance of a class should exist throughout the application.
*/