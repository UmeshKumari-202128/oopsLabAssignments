// Program to demonstrate the concept of constructor overloading.

#include <iostream>
using namespace std;

class complex // class declaration
{

private:
    int a, b; // Data members

public:
    complex() {} // Default constructor
    complex(int x, int y)  // Parameterized constructor
    { 
        a = x;
        b = y;
    }

     complex(int x)  // Parameterized constructor
    { 
        a = x;
        b = 3;
    }

    void printNumber()  // function to print complex number
    { 
        cout << "The complex number is " << a << " + i" << b << "." << endl;
    }
};

int main()
{

    complex c1(2, 3),c2,c3(4);         
    
    c1.printNumber();     // calling function
    c2.printNumber();
    c3.printNumber();

    return 0;
}