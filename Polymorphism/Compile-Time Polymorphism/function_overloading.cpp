/*
    *** Function Overloading ***
 - Function overloading allows multiple functions with the same name but different parameters (number or type) to coexist.

 - The correct function to be called is determined by the argument types or the number of arguments passed during the function call.
 */

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Math
{
public:
    // Two int arguments
    int add(int a, int b)
    {
        return a + b;
    }

    // Three int arguments
    int add(int a, int b, int c)
    {
        return a + b + c;
    }

    // int and double arguments
    double add(int a, double b)
    {
        return double(a + b);
    }

    // Two double arguments
    double add(double a, double b)
    {
        return a + b;
    }
};

int main()
{

    Math obj;

    cout << "int add(int a, int b){} : " << obj.add(5, 10) << endl;

    cout << "int add(int a, int b, int c){} : " << obj.add(5, 10, 15) << endl;

    cout << "double add(int a, double b){} : " << obj.add(5, 10.5) << endl;

    cout << "double add(double a, double b){} : " << obj.add(5.5, 10.5) << endl;

    return 0;
}