// Program to demonstrate the concept of Destructor.

#include <iostream>
using namespace std;

int count = 0;

class Num {   //Creating class
    public:
    Num(){  // constructor
        count++;
        cout<<"Constructor is called for "<<count<<endl;
        
    }
    
    ~ Num(){ // destructor
        
        cout<<"constructor is destroyed for "<<count<<endl;
        count--;
        
    }

};

int main(){
   cout<<"Entering the main function."<<endl;
   cout<<"Creating the first object."<<endl;
   Num n1;
   {
     cout<<"Entering the block."<<endl;
     cout<<"Creating two more objects."<<endl;
      Num n2,n3;
     cout<<"Exiting the block."<<endl;
   }
   cout<<"Coming back to the main block."<<endl;




    return 0;
}
