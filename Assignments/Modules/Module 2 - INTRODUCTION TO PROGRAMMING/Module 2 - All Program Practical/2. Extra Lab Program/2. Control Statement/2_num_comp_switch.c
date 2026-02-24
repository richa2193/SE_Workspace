#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, c;
    int largeCase, smallCase;

    printf("Enter First Number : ");
    scanf("%d", &a);

    printf("Enter Second Number : ");
    scanf("%d", &b);

    printf("Enter Third Number : ");
    scanf("%d", &c);


    // Determine case for largest
    largeCase = (a >= b && a >= c) ? 1 :
                (b >= a && b >= c) ? 2 : 3;

    switch (largeCase)
    {
        case 1:
            printf("\nLargest number = %d", a);
            break;
        case 2:
            printf("\nLargest number = %d", b);
            break;
        case 3:
            printf("\nLargest number = %d", c);
    }

    // Determine case for smallest
    smallCase = (a <= b && a <= c) ? 1 :
                (b <= a && b <= c) ? 2 : 3;

    switch (smallCase)
    {
        case 1:
            printf("\nSmallest number = %d", a);
            break;
        case 2:
            printf("\nSmallest number = %d", b);
            break;
        case 3:
            printf("\nSmallest number = %d", c);
    }

    getch();

}
