#include<stdio.h>
#include<conio.h>
void main()
{
    float num;

    printf("Enter the any one number : ");
    scanf("%f", &num);

    if(num>0)
        printf("Number is positive.");

    else if(num<0)
        printf("Number is negative.");

    else
        printf("\n You entered zero which is neither positive or negative.");

    getch();
}