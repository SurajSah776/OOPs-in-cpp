/*
 *** Overloading the == (Equality) Operator ***

- This allows objects to be compared for equality based on their internal data members.

- Overloading == can help in comparing complex data types in an intuitive way.

*/

#include <bits/stdc++.h>
using namespace std;

// Class Structure
class Password
{
private:
    string password;

public:
    // Constructor
    Password(string pass) : password(pass) {}

    // Overloading the == (Equality) operator
    bool operator==(const Password &pw)
    {
        // Return true if passwords are equal
        return this->password == pw.password;
    }

    // Function to display the information
    void display()
    {
        cout << "Password: " << password << endl;
    }
};

// Driver Code
int main()
{
    Password pw1("password@1");
    Password pw2("password#1");

    pw1.display();
    pw2.display();

    bool result = pw1 == pw2;

    if (result)
    {
        cout << "\nPassword Match!" << endl;
    }
    else
    {
        cout << "\nPassword didn't Match!" << endl;
    }
    return 0;
}
