#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b;

    printf("\n Enter the value of a : ");
    scanf("%f", &a);

    printf("\n Enter the value of b : ");
    scanf("%f", &b);

    float add = a+b;
    printf("\n The addition of a and b is : %f",add);

    float sub = a-b;
    printf("\n The substraction of a and b is : %f", sub);

    float mul = a*b;
    printf("\n The multiplication of a and b is : %f", mul);

    float div = a/b;
    printf("\n The division of a and b is : %f", div);

    // float mod = a%b;
    // printf("The module of a and b is : %f", mod);


    getch();
}