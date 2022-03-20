// Program to show that the effect of default arguments can be alternatively achieved by overloading.

#include <iostream>
using namespace std;

class myClass
{

public:
    double power(double x, int y)
    {

        double answer = 1;
        for (int i = 1; i <= y; i++)
        {
            answer = answer * x;
        }

        return answer;
    }

    double power(double x)
    {
        int y = 3;
        double answer = 1;
        for (int i = 1; i <= y; i++)
        {
            answer = answer * x;
        }

        return answer;
    }
};

int main()
{

    myClass myObj;

    cout << myObj.power(2, 5) << endl;
    cout << myObj.power(2) << endl;

    return 0;
}
