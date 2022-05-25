/// Write a program to create an abstract clas named Shape that contains an empty method named number
// of sides(). Provide three classes named Trapezoid, Triangle and Hexagon such that each one if the
// classes inherits the class Shape. Each one of the classes contains only the method number of sides()
// that shows the number of sides in the given geometrical figures.

#include <iostream>
using namespace std;

class Shape
{

protected:
    int sides;

public:
    virtual void numberOfSide() = 0;
};

class Triangle : public Shape
{

public:
    void numberOfSide()
    {
        sides = 3;
        cout << "The sides in Triangle is  " << sides << endl;
    }
};

class TrapeZoid : public Shape
{

public:
    void numberOfSide()
    {
        sides = 4;
        cout << "The sides in Trapezoid is  " << sides << endl;
    }
};

class Hexagon : public Shape
{

public:
    void numberOfSide()
    {
        sides = 6;
        cout << "The sides in Trapezoid is  " << sides << endl;
    }
};

int main()
{
    Shape *s;

    Triangle t;
    s = &t;
    s->numberOfSide();

    TrapeZoid T;
    s = &T;
    s->numberOfSide();

    Hexagon h;
    s = &h;
    s->numberOfSide();

    return 0;
}
