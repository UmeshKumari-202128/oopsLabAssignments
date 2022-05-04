// Program to overload binary operator.
#include <iostream>

using namespace std;

class String
{

private:
  string str1;

public:
  String(string a = "") // constructor of single parameter
  {
    str1 = a;
  }
  string get_string() // fucntion to store the value of string
  {
    return str1;
  }
  void display() // function to display the value of string
  {
    cout << "The string is : " << str1 << endl;
  }

  String operator+(String str2)
  {
    String result;
    result = str1 + " " + str2.str1;

    return result;
  }
};

int main()
{

  string first_string, second_string;
  cout << "Enter the value of First String = ";
  cin >> first_string;
  String s1(first_string); 
  s1.display();            
  cout << "Enter the value of Second String = ";
  cin >> second_string;
  String s2(second_string);
  s2.display();

  String my_str = s1 + s2;
  my_str.display();

  return 0;
}