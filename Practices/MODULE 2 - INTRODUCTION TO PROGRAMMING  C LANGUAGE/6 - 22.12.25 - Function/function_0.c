#include<stdio.h>
#include<conio.h>

// function creation 
int addition(int a, int b)
{
    return a+b;
}

int main()
{
    printf("\n %d", addition(5,2));
    printf("\n %d", addition(4,2));
    printf("\n %d", addition(3,2));
    printf("\n %d", addition(2,2));

    getch();
}