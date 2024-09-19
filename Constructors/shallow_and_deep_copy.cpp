/*
        *** Shallow and Deep Copy Constructor ***
 # Shallow Copy
1. Copies only references (memory addresses) of the object's members.
2. Shared memory between the original and copied object.
3. Default copy constructor does shallow copy.
4. Faster because it doesn't allocate new memory for dynamic members.
5. Risk of dangling pointers if one object is deleted.

 # Deep Copy
1. Copies actual data by allocating new memory for dynamic members.
2. Original and copied objects are independent.
3. Requires custom copy constructor to perform deep copy.
4. Slower than shallow copy due to new memory allocation.
5. Prevents issues like dangling pointers and data conflicts.
*/

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    // Dynamic Memory Allocation for name, branch and course
    string *name;
    int rollNo;
    string *branch;
    string *course;

    // Parameterized Constructor
    Student(string name, int rollNo, string branch, string course)
    {
        this->name = new string(name);
        this->rollNo = rollNo;
        this->branch = new string(branch);
        this->course = new string(course);
    }

    // Shallow Copy Constructor
    Student(const Student &obj)
    {
        this->name = obj.name; // Shallow copy (just copies the address, not the actual data)
        this->rollNo = obj.rollNo;
        this->branch = obj.branch;
        this->course = obj.course;
    }

    // Deep Copy Constructor
    Student(const Student &obj, bool isDeepCopy)
    {
        if (isDeepCopy)
        {
            this->name = new string(*obj.name); // Deep copy (creates new memory and copies data)
            this->rollNo = obj.rollNo;
            this->branch = new string(*obj.branch);
            this->course = new string(*obj.course);
        }
        else
        {
            // Fallback to shallow copy (optional)
            this->name = obj.name;
            this->rollNo = obj.rollNo;
            this->branch = obj.branch;
            this->course = obj.course;
        }
    }

    // Destructor to free dynamic memory
    ~Student()
    {
        delete name;
        delete branch;
        delete course;
    }

    // Function to display Student data
    void getData()
    {
        cout << "Name   : " << *name << endl;
        cout << "Roll   : " << rollNo << endl;
        cout << "Branch : " << *branch << endl;
        cout << "Course : " << *course << endl;
    }
};

int main()
{
    // Creating a student object (original)
    Student student1("Suraj", 3469, "CSE", "B.Tech");

    // Shallow copy
    Student shallowCopy(student1); // Shallow copy constructor

    // Deep copy
    Student deepCopy(student1, true); // Deep copy constructor

    // Original Data
    cout << "\nOriginal Data:" << endl;
    student1.getData();

    // Modifying original object's data to see the impact on shallow and deep copies
    *student1.name = "Dharmraj";
    *student1.branch = "Mech";

    cout << "\nOriginal Student after Changing 'name' and 'branch'" << endl;
    student1.getData();

    cout << "\nShallow Copy Student:" << endl;
    shallowCopy.getData();

    cout << "\nDeep Copy Student:" << endl;
    deepCopy.getData();

    /* Note: We can see that after modifying the original data, the data of shallow copy also modified because while copying, it copied the address and whatever modified in the original data:-reflects on the shallow copy:

    While in deep copy, new memory is allocated and then the data is copied hence although the original data changes/modified, it's copy(Deep copy) is not affected
    */
    return 0;
}
