// Write a function power() which raise a number m to a power n. The function take a double value of m
// and integer value of n and returns the result.use a default value of n is 2 to make the function to
// calculate squares when this argument is omitted.

#include <iostream>
using namespace std;

double power(double x, int y = 2)
{

    double answer =1;
    for (int i = 1; i <= y; i++)
    {
        answer = answer*x;
        
    }

    return answer;
}

int main()
{
    double answer, m;

    int n;
    power(m,n=2);
    cout << power(5,n) << endl;
    cout << power(4,3) << endl;

    return 0;
}