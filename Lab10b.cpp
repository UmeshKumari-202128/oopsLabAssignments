// Program to demonstrate the concept of Parameterized constructor.

#include <iostream>
using namespace std;

class complex // class declaration
{

private:
    int a, b; // Data members

public:
    complex() {} // Default constructor
    complex(int x, int y)
    { // Parameterized constructor
        a = x;
        b = y;
    }

    void printNumber()
    { // function to print complex number
        cout << "The complex number is " << a << " + i" << b << "." << endl;
    }
};

int main()
{

    complex c1(2, 3);          // Implicit call
    complex d = complex(7, 8); // Explicit call
    complex s;
    c1.printNumber();     // calling function
    d.printNumber();
    s.printNumber();

    return 0;
}