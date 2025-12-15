#include<stdio.h>
#include<conio.h>
void main()
{
    int num;

    printf("Enter Your Number : ");
    scanf("%d", &num);

    if(num%2==0)
    {
        printf("Your number is Even.");
    }
    else
    {
        printf("Your number is Odd.");
    }

    getch();
}