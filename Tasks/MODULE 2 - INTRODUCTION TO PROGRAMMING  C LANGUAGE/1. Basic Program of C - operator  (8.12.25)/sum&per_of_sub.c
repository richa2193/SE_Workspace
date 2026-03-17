#include<stdio.h>
#include<conio.h>
void main()
{
    
    float g,m,e,h,s;
    
    printf("\n Enter the marks of subject Gujarati is g : ");
    scanf("%f", &g);

    printf("\n Enter the marks of subject Maths is m  : ");
    scanf("%f", &m);

    printf("\n Enter the marks of subject English is e : ");
    scanf("%f", &e);

    printf("\n Enter the marks of subject Hindi is h : ");
    scanf("%f", &h);

    printf("\n Enter the marks of subject Science is s : ");
    scanf("%f", &s);

    float total_marks = g+m+e+h+s;
    printf("\n The Total obtain Marks is : %f" ,total_marks);
    
    float per = total_marks*100/500;
    printf("\n The Percentage of 5 Subject is : %f" ,per);


    getch();
}