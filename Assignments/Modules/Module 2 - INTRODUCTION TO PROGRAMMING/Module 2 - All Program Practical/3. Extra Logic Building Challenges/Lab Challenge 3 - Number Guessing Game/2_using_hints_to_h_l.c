#include<stdio.h>
#include<conio.h>
#include<stdlib.h>  // for rand() and srand()
#include<time.h>    // for time()

int main()
{
    int randomnumber, guess;
    int attempts = 5;   // maximum number of attempts 
    int i;

    // step 1: Initialize random number generator 
    // this ensures different random numbers every time program runs 
    srand(time(0));

    // step 2: generate a random number between 1 to 100 
    randomnumber = (rand() % 100) + 1;

    printf("\n Welcome to Number Guessing Game : ");
    printf("\n I have selected a number between 1 to 100. ");
    printf("\n You have %d Attempts to guess it.\n\n", attempts);

    // step 3: LOOP FOR LIMITED ATTEMPTS 
    for(i = 1; i <= attempts; i++)
    {
        printf("\n Attempts %d : Enter Your Guess : ", i);
        scanf("%d", &guess);

        // step 4: check the guess 
        if(guess == randomnumber)
        {
            printf("\n Congratulations! You have gueesed the correct number.");
            break; // ecit loop if gueesed correctly.
        }
        else if(guess > randomnumber)
        {
            printf("\n Too High! Try a smaller number.");
        }
        else
        {
            printf("\n Too Small! Try a bigger number.");
        }

        // step 5: if attempts are over 
        if(i == attempts)
        {
            printf("\n Sorry! you've used all attempts. ");
            printf("\n The correct number was : %d", randomnumber);   
        }
    }

    return 0;

}