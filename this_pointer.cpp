/*
    *** 'this' Pointer ***

  - The 'this' pointer refers to the object for which a member function is called.

  - It helps to differentiate between member variables and parameters or local variables with the same name.
*/

#include <iostream>
using namespace std;

class Box
{
private:
    int length;
    int width;
    int height;

public:
    // Constructor with parameters
    Box(int length, int width, int height)
    {
        // Using 'this' pointer to distinguish between member variables and parameters
        this->length = length;
        this->width = width;
        this->height = height;
        cout << "Box Created!" << endl;
    }

    // Member function to display box dimensions
    void showDimensions()
    {
        cout << "Length: " << this->length << endl;
        cout << "Width: " << this->width << endl;
        cout << "Height: " << this->height << endl;
    }

    // Member function to modify dimensions
    void setDimensions(int length, int width, int height)
    {
        // Using 'this' pointer to set the member variables
        this->length = length;
        this->width = width;
        this->height = height;
    }
};

// Driver Code
int main()
{
    Box myBox(10, 20, 30);
    myBox.showDimensions();
    cout << endl;
    cout << endl;

    // Modify dimensions
    myBox.setDimensions(40, 50, 60);
    myBox.showDimensions();

    return 0;
}
