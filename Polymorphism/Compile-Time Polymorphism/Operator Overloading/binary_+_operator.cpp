/*
    *** Binary + Operator Overloading ***

- The + operator, when used with values of type int, returns their sum. However, when used with objects of a user-defined type, it is an error.

- In this case, we can define the behavior of the + operator to work with objects as well.

- This concept of defining operators to work with objects and structure variables is known as operator overloading.
*/

// This program adds two complex numbers (Using Friend Function)

#include <bits/stdc++.h>
using namespace std;

class Complex
{
private:
    float real;
    float imag;

public:
    // Constructor to initialize real and img to 0
    Complex() : real(0), imag(0) {}

    // Parameterized Constructor
    Complex(float real, float imag) : real(real), imag(imag) {}

    // Overload the '+' operator
    friend Complex operator+(const Complex &obj1, const Complex &obj2);

    // Function to display the Result
    void display()
    {
        if (imag < 0)
            cout << "Complex number: " << real << imag << "i";
        else
            cout << "Complex number: " << real << " + " << imag << "i" << endl;
    }
};

// Function Definition
Complex operator+(const Complex &obj1, const Complex &obj2)
{
    Complex temp;
    temp.real = obj1.real + obj2.real;
    temp.imag = obj1.imag + obj2.imag;

    return temp;
}

// Driver Code
int main()
{
    Complex obj1(5.1, 6.6);
    Complex obj2(3.8, 4.4);

    // calls the overloaded + operator
    Complex result = obj1 + obj2;

    // Displaying the Result
    result.display();

    return 0;
}

/* Without Using Friend Function
- To achieve operator overloading without using a friend function, you can define the overloaded operator as a member function inside the class.

- The key difference is that when the operator is defined inside the class, it takes only one argument (the right-hand side operand), while the left-hand side operand is the calling object.
*/

/*
Note : Which One Is Best?

 # Use friend functions:
- When you need full access to private members of both operands.

- When you need to allow operations with non-class types on the left-hand side (e.g., int + Complex).


 # Use member functions:
- When the left-hand operand is always an object of the class.

- For unary operators (e.g., ++, --).

- For better encapsulation and code clarity.

*/