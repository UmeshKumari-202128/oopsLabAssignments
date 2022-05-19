//  Program to show hybrid inheritance.

#include <iostream>
using namespace std;
class University
{
public:
    University()
    {
        cout << "This is CUH university.\n";
    }
};
class Department : public University
{
public:
    Department()
    {
        cout << "University have many departments.\n";
    }
};
class HOD
{
public:
    HOD()
    {
        cout << "Every department have a HOD.\n";
    }
};
class CSE : public Department, public HOD
{
public:
    CSE()
    {
        cout << "He is the HOD Of CSE department.\n";
    }
};
int main()
{
    CSE f;
    return 0;
}