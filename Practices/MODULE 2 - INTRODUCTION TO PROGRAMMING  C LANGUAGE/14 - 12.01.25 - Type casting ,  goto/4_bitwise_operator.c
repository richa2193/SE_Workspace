#include<stdio.h>
#include<conio.h>

void main()
{
    int a = 5;
    int b = 7;

    //performing Bitwise AND on a and b 
    int c = a & b;
    printf("\n %d",c);

    // performing Bitwise OR on a and b 
    int d = a | b;
    printf("\n %d",d);

    // performing Bitwise XOR on a and b
    int e = a ^ b;
    printf("%d",e);

    // performing Bitwise NOT on a 
    int f = ~a;
    printf("\n %d", f);

    // performing Left Shift on a 
    int g = a << b;
    printf("\n %d", g);

    // performing Right shift on a and b
    int h = a >> b;
    printf("\n %d", h);

    getch();

}