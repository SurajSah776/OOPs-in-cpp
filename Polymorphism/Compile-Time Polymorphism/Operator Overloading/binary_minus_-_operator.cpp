/*
 *** Overloading Binary minus (-) Operator ***
 */

#include <bits/stdc++.h>
using namespace std;

// Class
class BinaryMinus
{
private:
    int a;

public:
    // Constructor List
    BinaryMinus(int a) : a(a) {}

    // Overloading Binary '-' Operator
    int operator-(const BinaryMinus &obj)
    {
        return (this->a > obj.a) ? (this->a - obj.a) : (obj.a - this->a);
    }
};

// Driver Code
int main()
{
    BinaryMinus ob1(9);
    BinaryMinus ob2(3);

    // Overloading Binary '-' Operator

    int result = ob2 - ob1;
    cout << "Result = " << result << endl;

    return 0;
}