#include<stdio.h>
#include<conio.h>

void main()
{
    int a = 5;
    int b = 4;
    int c;
    
    a+=b++;
    //a= a + b++ // 5 + 4 = 9
    printf("%d",a);
    
    getch();
}