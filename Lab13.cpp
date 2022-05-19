// Program to show multilievel inheritance.

#include <iostream>
using namespace std;

class Animal
{
public:
    Animal()
    {
        cout << "Animals make different sounds.\n";
    }
};

class Dog : public Animal
{
public:
    Dog()
    {
        cout << "This is a dog.\n";
    }
};

class Sound : public Dog
{
public:
    Sound()
    {
        cout << "Dog barks.\n";
    }
};

int main()
{

    Sound obj;

    return 0;
}