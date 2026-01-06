#include<stdio.h>
#include<conio.h>
void main()
{
    int marks;

    printf("Enter Your Marks : ");
    scanf("%d", &marks);

    if(marks>=70)
    {
        printf("A grade");
    }

    else if(marks>=60)
    {
        printf("B grade");
    }

    else if(marks>=50)
    {
        printf("C grade");
    }

    else if(marks>=40)
    {
        printf("D grade");
    }

    else
    {
        printf("Fail");
    }

    getch();
}