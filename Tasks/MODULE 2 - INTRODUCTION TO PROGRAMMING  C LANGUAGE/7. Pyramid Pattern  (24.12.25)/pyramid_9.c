#include <stdio.h>
#include <conio.h>

void main()
{
    int i, j, space, num;

    printf("Enter number: ");
    scanf("%d", &num);

    // First row (full stars)
    for (j = 1; j <= 2 * num; j++)
    {
        printf("* ");
    }
    printf("\n");

    // Remaining rows
    for (i = num - 1; i >= 1; i--)
    {
        // Left stars
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }

        // Middle spaces (IMPORTANT FIX)
        for (space = 1; space <= (num - i) * 4; space++)
        {
            printf(" ");
        }

        // Right stars
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    getch();
}
