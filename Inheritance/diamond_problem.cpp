/*
    *** Diamond Problem ***
    - The diamond problem (also known as ambiguous inheritance) is a situation in multiple inheritance where a class inherits from two classes that both inherit from the same base class, causing ambiguity.

    - It is called the "diamond problem" because the inheritance structure forms a diamond shape.


    #Concept:
Imagine you have a base class 'A'. Two classes 'B' and 'C' inherit from 'A'. Now, another class 'D' inherits from both 'B' and 'C'. The problem arises when class 'D' tries to access a method or attribute that is inherited from 'A', because it’s unclear whether it should use the version of 'A' from 'B' or the version from 'C'. This ambiguity can cause problems.

#Solution to Diamond Problem:
In C++, this problem is solved using virtual inheritance. By making the inheritance of class 'A' virtual, we ensure that only one copy of A's members is inherited, and it is shared between 'B', 'C', and 'D'.
*/

#include <bits/stdc++.h>
using namespace std;

// Base class Device
class Device
{
public:
    Device()
    {
        cout << "Device created" << endl;
    }

    void turnOn()
    {
        cout << "Turning on the device" << endl;
    }
};

// Derived class Phone from Device with virtual inheritance
class Phone : virtual public Device
{
public:
    Phone()
    {
        cout << "Phone created" << endl;
    }

    void makeCall()
    {
        cout << "Making a phone call" << endl;
    }
};

// Derived class Camera from Device with virtual inheritance
class Camera : virtual public Device
{
public:
    Camera()
    {
        cout << "Camera created" << endl;
    }

    void takePhoto()
    {
        cout << "Taking a photo" << endl;
    }
};

// Derived class Smartphone from both Phone and Camera
class Smartphone : public Phone, public Camera
{
public:
    Smartphone()
    {
        cout << "Smartphone created" << endl;
    }

    void useSmartphone()
    {
        cout << "Using smartphone features" << endl;
    }
};

// Driver Code
int main()
{
    // Create a Smartphone object
    Smartphone s;

    // Access methods from both Phone and Camera
    s.makeCall();  // From Phone class
    s.takePhoto(); // From Camera class

    // Access method from the base Device class (no ambiguity due to virtual inheritance)
    s.turnOn(); // From Device class

    return 0;
}

/*   Key Points
  - Virtual inheritance ensures that Smartphone only inherits one instance of the base class Device, solving the diamond problem.

  - Without virtual inheritance, there would be ambiguity because both Phone and Camera would inherit separate copies of Device.
*/