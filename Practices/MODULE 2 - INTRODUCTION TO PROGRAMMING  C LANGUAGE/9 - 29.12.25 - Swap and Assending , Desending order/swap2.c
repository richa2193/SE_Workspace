#include<stdio.h>
#include<conio.h>

void main()
{
    int a = 5,b = 10;

    a=a+b; // 5+10 = 15
    b=a-b; // 15-10 = 5
    a=a-b; // 15-5 = 10

           
    printf("\n %d", a); 
    printf("\n %d", b);

    getch();
    
}