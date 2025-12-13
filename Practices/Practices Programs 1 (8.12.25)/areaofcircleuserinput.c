#include<stdio.h>
#include<conio.h>
void main()
{
    
    float PI=3.14;
    int radius;
    
    printf("Enter Radius");
    scanf("%d",&radius);
    
    
    float ans = PI*radius*radius;
    printf("Area of circle is : %f",ans);
    
  
    
    getch();
}