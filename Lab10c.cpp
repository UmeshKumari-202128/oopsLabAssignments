// Program to demonstrate the concept of copy constructor.

#include <iostream>
using namespace std;

class complex // class declaration
{

private:
    int a, b; // Data members

public:
    complex() {} // Default constructor
    complex(int x, int y) // Parameterized constructor
    { 
        a = x;
        b = y;
    }

    complex(complex &i){   // Copy Constructor
        a=i.a;
        b=i.b;
    }

        void
        printNumber()  // function to print complex number
    { 
        cout << "The complex number is " << a << " + i" << b << "." << endl;
    }
};

int main()
{

    complex c1(2, 3);     

    complex m(c1) ;  //calling the copy constructor


    c1.printNumber();
    m.printNumber();
    

    return 0;
}