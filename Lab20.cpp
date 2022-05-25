// Program to read the name and roll numbers of students from keyboard and write them into a file and
// then display it.

#include <iostream>
#include <fstream>
using namespace std;

class Student
{
    int roll_no;
    char name[30];

public:
    student() {}
    void getDetail()
    {
        cout << "\nEnter Roll No. :: ";
        cin >> roll_no;
        cin.ignore(); // ignore the newline char inserted when you press enter
        cout << "\nEnter Name :: ";
        cin.getline(name, 30);
    }
    void display()
    {
        cout << "\nRoll No. :: " << roll_no << endl;
        cout << "\nName :: " << name << endl;
    }
};

int main()
{
    Student s[3]; // array of 3 student objects
    fstream file;
    int i;

    file.open("C:\\Users\\Umesh\\Documents\\file.txt", ios ::out); // open file for writing
    cout << "\nWriting Student information to the file :- " << endl;
    cout << "\nEnter 3 students Details to the File :- " << endl;

    for (i = 0; i < 3; i++)
    {
        s[i].getDetail();
        // write the object to a file
        file.write((char *)&s[i], sizeof(s[i]));
    }

    file.close(); // close the file

    file.open("C:\\Users\\Umesh\\Documents\\file.txt", ios ::in); // open file for reading
    cout << "\nReading Student information to the file :- " << endl;

    for (i = 0; i < 3; i++)
    {
        // read an object from a file
        file.read((char *)&s[i], sizeof(s[i]));
        s[i].display();
    }

    file.close(); // close the file

    return 0;
}