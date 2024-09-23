/*
 *** Overloading Unary minus (-) Operator ***
 */

#include <bits/stdc++.h>
using namespace std;

// Class Structure

class UnaryMinus
{

private:
    int a;

public:
    // Constructor
    UnaryMinus(int a) : a(a) {}

    // Overloading unary minus (-)
    void operator-()
    {
        a = -a;
    }

    // Function to display the result
    void display()
    {
        cout << "a = " << a << endl;
    }
};

// Driver Code
int main()
{
    UnaryMinus obj(6);

    obj.display();

    // Unary Minus(-)
    -obj;
    cout << "After -a, ";
    obj.display();

    return 0;
}