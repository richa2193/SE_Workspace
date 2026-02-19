#include<iostream>
using namespace std;

class bankaccount
{
    private:
    double balance;     //private data members (encapsulation)

    public:

    // constructor to initialize balance
    bankaccount(double initialbalance)
    {
        balance = initialbalance;
    } 

    // deposite function 
    void deposit(double amount)
    {
        if(amount > 0)
        {
            balance += amount;
            cout << "Deposited : " << amount << endl;
        }
        else
        {
            cout << "Invalid deposi amount! " << endl;
        }
    }

    // withdraw function 
    void withdraw(double amount)
    {
        if(amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdraw : " << amount << endl;
        }

        else
        {
            cout << "Insufficient balance or invalid amount!  " << endl;
        }
    }

    // function to display balance 
    void showbalance()
    {
        cout << "Current Balance : " << balance << endl;
    }
};

int main()
{
    bankaccount account(1000);

    account.showbalance();

    account.deposit(500);
    account.showbalance();

    account.withdraw(300);
    account.showbalance();

    return 0;
    
}