#include<stdio.h>
#include<conio.h>

void main()
{
    int a = 5,b=10,c;

    c = a;
    a = b;
    b = c;

    printf("\n %d", a);
    printf("\n %d", b);

    getch();

}