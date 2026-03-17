#include<stdio.h>
#include<conio.h>

void main()
{
    int marks[5];
    int i,total=0;
    double percentage;

    for(int i=1;i<=5;i++)
    {
        printf("\n Enter marks of the student %d is : ", i);
        scanf("%d",&marks[i]);
        total = total+marks[i];
    }

    percentage = total/5.0;


    printf("\n Total marks is : %d", total);
    printf("\n Percentage is : %lf", percentage);

    getch();
}