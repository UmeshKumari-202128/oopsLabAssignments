// Write a class ACCOUNT that represents your bank account and then use it.
// The class should allow you to deposit money , withdraw money , calculate interest , and
// send you a message if you have insufficient balance.

#include <iostream>
using namespace std;

class Account
{
    private:
      int balance = 20000;
      const int acc_no = 67542345;

    public:

    
    
    int amt_dep(int x)
    {
        balance = balance + x;
        return balance;
    }

    int amt_wid(int y)
    {
        if (balance < y)
        {
            cout << "Insufficient Balance" << endl;
        }
        else
        {
            balance = balance - y;
            return balance;
        }
    }

    double interest(double rate,double time){

       double simpleInterest = balance*rate*time/100;
       return simpleInterest;
    }
};

int main(){

    Account myAccount;

   cout<<myAccount.interest(4,5)<<endl;
   cout<<myAccount.amt_dep(4000)<<endl;
   cout<<myAccount.amt_wid(5000)<<endl;


    return 0;
}