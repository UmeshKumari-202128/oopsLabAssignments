// Program to show multiple inheritance.

#include <iostream>
using namespace std;

class Vehicle
{
public:
    Vehicle()
    {
        cout << "This is the vehicle.\n";
    }
};

class Car
{
public:
    Car()
    {
        cout << "This is the car.\n";
    }
};

class Audi : public Vehicle, public Car
{
public:
    Audi()
    {
        cout << "This is the audi Q3.\n";
    }
};

int main()
{

    Audi obj;
    return 0;
}