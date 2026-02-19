#include<iostream>
#include<cstdlib> // for rand() and srand()
#include<ctime>   // for time()
using namespace std;

int main()
{
    int secretnumber, guess;

    // generate rendom number between 1 to 100
    srand(time(0));
    secretnumber = rand() % 100 + 1;

    cout << "Guess a Number Between 1 to 100 "  << endl;

    // loop until correct guess
    do 
    {
        cout << "Enter Your Guess : ";
        cin>>guess;

        if(guess > secretnumber)
        {
            cout << "Too High! Try Again." << endl;
        }

        else if(guess < secretnumber)
        {
            cout << "Too Low! Try again." << endl;
        }

        else
        {
            cout << "Congratulations!  You guessed the correct number! " << endl;
        }
    }

    while (guess != secretnumber);

    return 0;
    
}