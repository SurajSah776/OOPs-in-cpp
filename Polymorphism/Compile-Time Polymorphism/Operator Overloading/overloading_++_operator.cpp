/*
 *** Overloading '++' as a Prefix and Postfix Operator ***
 */

#include <bits/stdc++.h>
using namespace std;

// Class Structure
class Count
{
private:
    int count;

public:
    // Constructor
    Count(int count) : count(count) {}

    // Overloading '++' as a Prefix Operator
    void operator++()
    {
        ++count;
    }

    // Overloading '++' as a Postfix Operator
    void operator++(int)
    {
        count++;
    }

    // Function to display the value
    void display()
    {
        cout << "Count = " << count << endl;
    }
};

int main()
{
    Count cnt(0);
    cout << "Initially, ";
    cnt.display();

    // Prefix Increment
    cout << "++Count, ";
    ++cnt;
    cnt.display();

    // Prefix Increment
    cout << "++Count, ";
    ++cnt;
    cnt.display();

    // Postfix Increment
    cnt++;
    cout << "Count++, ";
    cnt.display();

    // Postfix Increment
    cnt++;
    cout << "Count++, ";
    cnt.display();

    return 0;
}