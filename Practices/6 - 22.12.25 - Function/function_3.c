#include<stdio.h>
#include<conio.h>

//with para with return type
int add(int a, int b)
{
    int c = a+b;

    return c;
}

void main()
{
    printf("%d", add(7,3));

    getch();
}