/*
    *** Constructor Initialization List ***

    - A constructor initialization list is a more efficient way of initializing member variables of a class before the constructor's body is executed.

    - It directly assigns values to the class's member variables during object construction.

    - This approach is particularly useful when initializing:
        *Constant members (const variables).
        *Reference members (because references must be initialized when they are created).
        *Class members that don’t have default constructors.
*/

#include <bits/stdc++.h>
using namespace std;

// Base Class
class Person
{
private:
    string name;
    string city;

public:
    // Using Constructor Initialization List
    Person(string name, string city) : name(name), city(city) {}

    void displayInfo()
    {
        cout << "Name : " << name << endl;
        cout << "City : " << city << endl;
    }
};

// Derived Class
class Employee : public Person
{
private:
    double salary;
    int id;

public:
    // Using Constructor Initialization List
    Employee(string name, string city, int id, double salary) : Person(name, city), id(id), salary(salary) {}

    void displayInfo()
    {
        // Calling base class displayInfo() method
        Person::displayInfo();
        cout << "ID : " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

// Driver Code
int main()
{
    Employee emp("Suraj", "BBSR", 100, 70000);

    emp.displayInfo();
    return 0;
}