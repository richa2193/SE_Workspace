#include <stdio.h>
#include <conio.h>

void main()
{
    int num;

    printf("Enter Any Number: ");
    scanf("%d", &num);

    // Even or Odd
    if (num % 2 == 0)
        printf("\nThe Number is Even.");
    else
        printf("\nThe Number is Odd.");

    // Positive, Negative or Zero
    if (num > 0)
        printf("\nThe Number is Positive.");
    else if (num < 0)
        printf("\nThe Number is Negative.");
    else
        printf("\nThe Number is Zero.");

    // Multiple of 3 and 5
    if (num % 3 == 0 && num % 5 == 0)
        printf("\nThe Number is a Multiple of both 3 and 5.");
    else
        printf("\nThe Number is NOT a Multiple of both 3 and 5.");

    getch();
    
}













































// #include<stdio.h>
// #include<conio.h>

// void main()
// {
//     int num;

//     printf("\n Enter Any Number : ");
//     scanf("%d", &num);

//     // whether the number is even or odd.
//     if(num %2 == 0)
//     {
//         printf("The Number is Even. ");
//     }
//     else if(num%2!=0)
//     {
//         printf("\n The Number is Odd. ");
//     }


//     // whether the number is positive, negative or zero.
//     else if(num>0)
//     {
//         printf("\n The Number is Positive. ");
//     }
//     else if(num<0)
//     {
//         printf("\n The Number is Negative");
//     }
//     else if(num==0)
//     {
//         printf("\n The Number is zero.");
//     }


//     // Whether the number is a multiple of both 3 and 5.
//     else if(num %3 == 0 && num %5 == 0)
//     {
//         printf("\n The number is a Multiple of Both 3 and 5. ");
//     }
//     else(num%3!=0 && num%5!=0)
//     {
//         printf("\n The number is not a multiple of both 3 and 5.");
//     }

//     getch();


// }