#include<stdio.h>
#include<conio.h>
void main()
{
    
    float a,b;
    
    printf("\n Enter the value of a  : ");
    scanf("%f", &a);

    printf("\n Enter the value of b is : ");
    scanf("%f", &b);

    float ans = 0.5*a*b;
    printf("\n Area of Triangle is  : %f",ans);
    
    getch();
}