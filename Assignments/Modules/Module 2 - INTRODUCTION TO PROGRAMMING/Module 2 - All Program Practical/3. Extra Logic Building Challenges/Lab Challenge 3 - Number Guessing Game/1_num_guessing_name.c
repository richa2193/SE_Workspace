#include<stdio.h>
#include<conio.h>
#include<stdlib.h> // for rand() and srand()
#include<time.h>    // for time()


int main()
{
    int number, guess;
    int attempts = 5;   // maximum number of attempts 

    // generate ramdom number 
    // step 1: Initialize random number generator 
    // time(0) changes every second, so rand() gives a new number each run 
    srand(time(0));

    // step 2: Generate a random number between 1 to 100 
    // rand() % 100 gives value from 0 to 99, so +1 makes it 1 to 100 
    number =  rand() % 100 + 1;

    // display game instructions 
    printf("\n Guess the nunber between 1 to 100 : ");
    printf("\n You have %d Attempts. ", attempts);

    // step 4: loop runs for limited number of attempts 
    for(int i = 1; i <= attempts; i++)
    {
        // ask user to enter a guess  
        printf("\n Attempts %d : Enter Your Guess : ", i);
        scanf("%d", &guess);

        // step 5: check if user's guess is correct 
        if(guess == number)
        {
            // if gueesed correctly, display success message 
            printf("\n Congratulations! You have guessed the correct number. ");
            return 0;   // end the program immidiately 
        }

        // if guess is wrong, loop continues for next attempts   
    }

    // step 6: if all attempts are used and number is not gueesed.
    printf("\n Game Over!! The correct number was %d", number);

    return 0; // program ends 

}
