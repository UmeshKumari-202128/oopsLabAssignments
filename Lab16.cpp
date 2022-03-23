// Program to overload unary operator.

#include <iostream>
using namespace std;
class Square
{

private:
    int value;

public:
    Square() : value(6) {}

    int sqr()
    {

        return value * value;
    }
    Square operator ++()
    {
        cout << "Enter the value" << endl;
        cin >> value;
        ++value;
    }
    void display()
    {
        cout << sqr() << endl;
    }
};

int main()
{
    Square my_sqr;
    ++my_sqr;
    my_sqr.display();

    return 0;
}