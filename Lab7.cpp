// Creating class Time to store time in hours and minutes. Write a friend function to add two Time objects.

#include <iostream>
using namespace std;

class Time
{
private:
    int hours, minutes;

public:
    void getTime(int h, int m)
    {
        hours = h;
        minutes = m;
    }

    void display()
    {
        cout << "The hours are " << hours << endl;
        cout << "The minutes are " << minutes << endl;
    }

    friend Time sum(Time T1, Time T2)
    {
        Time T;
        T.minutes = T1.minutes + T2.minutes;
        T.hours = T.minutes / 60;
        T.minutes = T.minutes % 60;
        T.hours = T.hours + T1.hours + T2.hours;
        return T;
    }
};

int main()
{

    Time t1, t2, t3;
    t1.getTime(2, 40);
    t2.getTime(3, 50);

    t1.display();
    t2.display();
    t3 = sum(t1, t2);
    t3.display();

    return 0;
}