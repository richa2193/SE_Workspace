#include<stdio.h>
#include<conio.h>

//function create 
//with para with return
double cal(double a, double b, double c)
{
    return a*b*c;
}

void main()
{
    printf("%lf", cal(2.0,3.0,4.0));

    getch();
}