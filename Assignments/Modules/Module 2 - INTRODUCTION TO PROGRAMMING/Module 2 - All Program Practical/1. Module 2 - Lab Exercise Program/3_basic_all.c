#include <stdio.h>
#include<conio.h>

/* This program demonstrates
   variables, constants, data types
   and comments in C - single line comment */
   
void main()
{
    // Variable declarations
    int age = 20;
    char grade = 'A';
    float percentage = 85.5;

    // Constant declaration
    const float PI = 3.14;

    // Displaying values - multiline comments
    printf("Age = %d\n", age);
    printf("Grade = %c\n", grade);
    printf("Percentage = %.2f\n", percentage);
    printf("Value of PI = %.2f\n", PI);

    getch();

}
