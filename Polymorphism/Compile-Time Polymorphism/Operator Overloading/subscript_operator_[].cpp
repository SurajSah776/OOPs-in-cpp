/*
 *** Overloading the [] (Subscript) Operator ***

 - This allows array-like access for an object.

- The subscript operator [] allows access to elements in an object similar to how arrays work.

- This is useful when you want to create a class that behaves like an array or container.
 */
#include <bits/stdc++.h>
using namespace std;

// Class
class IntArray
{
private:
    int arr[5];

public:
    // Constructor
    IntArray()
    {
        for (int i = 0; i < 5; i++)
        {
            arr[i] = i + 1;
        }
    }

    // Overloading subscript '[]' operator
    int &operator[](int index)
    {
        if (index >= 0 && index < 5)
        {
            return arr[index];
        }
        else
        {
            cout << "Index out of bound!" << endl;
            exit(0);
        }
    }
    /*
    Note:
    - The & symbol in int &operator[](int index) is used to return a reference to the element at the specified index, rather than a copy of it.
    - This allows the element to be both accessed and modified directly.*/

    // Function to display the Array Elements
    void display()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

// Driver Code
int main()
{
    IntArray myArray;
    myArray.display(); // Output: 1 2 3 4 5

    myArray[2] = 34;            // Modify the value at index 2
    cout << myArray[2] << endl; //  Output: 34
    cout << myArray[3] << endl; // Output: 4

    return 0;
}
