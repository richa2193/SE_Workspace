#include<stdio.h>
#include<conio.h>
void main()
{
    
    float PI=3.14;
    float radius;
    
    printf("\n Enter the Radius of circle : ");
    scanf("%f", &radius);

    float ans = PI*radius*radius;
    printf("\n Area of circle is : %f",ans);
    
    getch();
}