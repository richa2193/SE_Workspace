#include <stdio.h>
#include<conio.h>

void main()
{
    int a, b;

    // Accept two integers from the user
    printf("Enter first integer: ");
    scanf("%d", &a);

    printf("Enter second integer: ");
    scanf("%d", &b);

    /* Arithmetic Operations */
    printf("\nArithmetic Operations:\n");
    printf("\n Addition = %d ", a + b);
    printf("\n Subtraction = %d ", a - b);
    printf("\n Multiplication = %d ", a * b);
    printf("\n Division = %d ", a / b);
    printf("\n Modulus = %d \n ", a % b);

    /* Relational Operations */
    printf("\nRelational Operations:\n");
    printf("\n a == b : %d ", a == b);
    printf("\n a != b : %d ", a != b);
    printf("\n a > b  : %d ", a > b);
    printf("\n a < b  : %d ", a < b);
    printf("\n a >= b : %d ", a >= b);
    printf("\n a <= b : %d \n ", a <= b);

    /* Logical Operations */
    printf("\nLogical Operations:\n");
    printf("\n (a > 0 && b > 0) : %d ", (a > 0 && b > 0));
    printf("\n (a > 0 || b > 0) : %d ", (a > 0 || b > 0));
    printf("\n !(a > 0)        : %d ", !(a > 0));

    getch();

}
