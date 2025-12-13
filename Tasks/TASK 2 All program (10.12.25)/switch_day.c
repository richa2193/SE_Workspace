#include<stdio.h>
#include<conio.h>
void main()
{
    int num;

    printf("Enter a number from 1 to 7 :  ");
    scanf("%d", &num);

    switch(num)
    {
        case 1: printf("\n monday");
        break;

        case 2: printf("\n tuesday");
        break;

        case 3: printf("\n wednesday");
        break;

        case 4: printf("\n thursday");
        break;

        case 5: printf("\n friday");
        break;

        case 6: printf("\n saturday");
        break;

        case 7: printf("\n sunday");
        break;

        default:
            printf("Invalid number entered. Please enter a number between 1 to 7.");

    }

    getch();
}