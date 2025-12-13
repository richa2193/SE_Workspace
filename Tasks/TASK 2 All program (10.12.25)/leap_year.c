#include<stdio.h>
#include<conio.h>
void main()
{
    int year;

    printf("Enter a Year : ");
    scanf("%d",&year);

    if((year%400 == 0) || (year%4 == 0 && year%100 != 0))
    {
        printf("This year is leap year. %d",year);
    }

    else
    {
        printf("This is not leap year. %d", year);
    }

    getch();
}