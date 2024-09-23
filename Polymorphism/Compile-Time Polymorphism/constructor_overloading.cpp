/*
    *** Constructor Overloading ***

- Constructors can be overloaded in a similar way as function overloading.

- Overloaded constructors have the same name (name of the class) but the different number of arguments.

- Depending upon the number and type of arguments passed, the corresponding constructor is called.

*/

#include <bits/stdc++.h>
using namespace std;

class Room
{
private:
    double length;
    double breadth;

public:
    // 1. Constructor with no arguments
    Room()
    {
        length = 6.9;
        breadth = 4.2;
    }

    // 2. Constructor with two arguments
    Room(double l, double b)
    {
        length = l;
        breadth = b;
    }

    // 3. Constructor with one argument
    Room(double len)
    {
        length = len;
        breadth = 7.2;
    }

    // Method to calculate the area of the Room
    double calculateArea()
    {
        return length * breadth;
    }
};

int main()
{
    Room room1, room2(8.2, 6.6), room3(8.2);

    cout << "When no argument is passed: " << endl;
    cout << "Area of room = " << room1.calculateArea() << endl;
    cout << endl;

    cout << "When (8.2, 6.6) is passed." << endl;
    cout << "Area of room = " << room2.calculateArea() << endl;
    cout << endl;

    cout << "When breadth is fixed to 7.2 and (8.2) is passed:" << endl;
    cout << "Area of room = " << room3.calculateArea() << endl;
    cout << endl;

    return 0;
}