#include<iostream>
#include<ctime>
#include<conio.h>   //for hetch()
using namespace std;

class ATM 
{
    private:
    int pin;
    double balance;

    public:
    ATM()
    {
        pin = 12345;
        balance = 20000;    //present balance 
    }

    void showdatetime()
    {
        time_t now = time(0);
        char* dt = ctime(&now);
        cout << "------------------------------------------------\n ";
        cout << "Current Date : " << dt;
        cout << "------------------------------------------------\n ";
    }

    void welcomescreen()
    {
        cout << "============================================= \n ";
        cout << "               WELCOME TO ATM            \n         ";
        cout << "\n ============================================= \n\n ";

        showdatetime();

        cout << "\n Press 1 and Then Press Enter to Access Your Account Via Pin Number ";
        cout << "or 11\n";
        cout << "Press 0 and press Enter to get Help. \n ";
    }

    void helpscreen()
    {
        cout << "\n ============= ATM ACCOUNT STATUS ==============\n";
        cout << "You must have the correct pin number to access this account.\n ";
        cout << "See your bank representative for assistance during bank opening hours.\n ";
        cout << "Thanks for your choice today!! \n";
        cout << "\n Press any key to continue...";
        getch();
    }

    bool verifypin()
    {
        int enteredpin;
        cout << "\n =================== ATM ACCOUNT ACCESS ======================\n ";
        cout << " Enter Your Acc Pin Access Number! [only one attempt is allowed]\n\n";
        cin>>enteredpin;

        if(enteredpin == pin)
        {
            return true;
        }
        else
        {
            cout << "\n ================== THANK YOU ====================\n ";
            cout << "You had made your attempt which failed!!! No more attempts allowed!!! Sorry!! \n";
            cout << "\n Press any key to continue...";
            getch();
            return false;
        }
    }

    void mainmenu()
    {
        int choice;

        do
        {
            cout << "\n ============== ATM Main Menu Screen ==============\n ";
            cout << "\n Enter [1] To Deposit Cash.";
            cout << "\n Enter [2] To Withdraw Cash.";
            cout << "\n Enter [3] To Balance Inquiry.";
            cout << "\n Enter [0] To Exit ATM."<< endl;
            cout << "\n PLEASE ENTER A SELECTION AND PRESS RETURN KEY: ";
            cin>>choice;

            switch(choice)
            {
                case 1:
                    deposit();
                    break;
                    
                case 2:
                    withdraw();
                    break;

                case 3:
                    checkbalance();
                    break;

                case 0:
                    cout << "\n Thank You for Using ATM!";
                    break;

                default:
                    cout << "\n Invalid Selection";
            }
        }

        while(choice != 0);
    }

    void deposit()
    {
        double amount;

        cout << "\n ================= ATM ACCOUNT DEPOSIT SYSTEM ===================\n " << endl;
        cout << "The Names of the Account Holder are: Richa Parmar " << endl;
        cout << "The Account Holder's address is : Rajkot " << endl;
        cout << "The Branch Location is : Kalawad Road " << endl;
        cout << "Account Number : 5678 " << endl;

        cout << "Present available balance : Rs. " << balance << endl;
        cout << "Enter the Amount to be Deposited Rs. " << endl;
        cin >> amount;

        balance += amount;

        cout << "\n Your new available Balanced Amount is Rs. " << balance << endl;
        cout << "\n Thank You!\n ";
        cout << "\n Press any key to Return to the Main Menu";
        getch();
    }

    void withdraw()
    {
        double amount;

        cout << "\n ================== ATM ACCOUNT WITHDRAWAL ===================\n ";
        cout << "The Names of the Account Holders are : Richa Parmar\n";
        cout << "The Account Holder's Address is : Rajkot\n ";
        cout << "The Branch Location is : Kalawad Road\n";
        cout << "Account Number : 5678\n";

        cout << "\n Enter Amount to Withdraw : Rs. ";
        cin>>amount;

        if(amount > balance)
        {
            cout << "\n Insuffient Available Balance in your Account. \n ";
            cout << "\n Sorry!! \n ";
        }

        else
        {
            balance -= amount;
            cout << "\n Transaction Successful!\n ";
            cout << "Remaining Balance : Rs. " << balance << endl;
        }

        cout << "\n Press Any key to continue...";
        getch();
    }

    void checkbalance()
    {
        cout << "\n =================== BALANCE INQUIRY ====================== \n";
        cout << "Your Current Balance is Rs. " << balance << endl;
        cout << "\n Press any key to continue...";
        getch();
    }

};

int main()
{
    ATM obj;
    int choice;

    obj.welcomescreen();
    cin>>choice;

    if(choice == 1)
    {
        if(obj.verifypin())
        {
            obj.mainmenu();
        }
    }

    else if(choice == 0)
    {
        obj.helpscreen();
    }

    else
    {
        cout << "Invalid Input! ";
    }

    return 0;

}

