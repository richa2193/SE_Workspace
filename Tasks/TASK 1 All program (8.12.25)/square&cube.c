#include<stdio.h>
#include<conio.h>
void main()
{
    float a;

    printf("\n Enter the value of a : ");
    scanf("%f", &a);

    float square = a*a;
    printf("\n The Square of a is : %f", square);

    float cube = a*a*a;
    printf("\n The cube of a is : %f", cube);

    getch();
}