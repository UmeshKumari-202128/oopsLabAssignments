// Program to show the concept of run time polymorphism using virtual function.

#include <iostream>
using namespace std;

// Declaration of Base class
class Car
{
public:
    // Usage of virtual constructor
    virtual void prize()
    {
        cout << "Prize of your Car ";
    }
};

// Declaration of Derived calss
class Audi : public Car
{
public:
    void prize()
    {
        cout << "This is a Audi A4.\n";
        cout << "It's prize is 45 lakh.\n";
    }
};

// Declaration of 2nd derived class
class BMW : public Car
{
public:
    void prize()
    {
        cout << "This is a BMW 3 Series.\n";
        cout << "It's prize is 47 lakh\n";
    }
};

int main()
{

    // base class pointer
    Car *C;
    Audi a;

    // initilization of reference variable
    C = &a;

    // calling of audi function
    C->prize();

    BMW b;

    // initilization of reference variable
    C = &b;

    // calling of BMW function
    C->prize();

    return 0;
}
