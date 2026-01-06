#include<stdio.h>
#include<conio.h>

void main()
{
    int marks[5],total=0;
    float per=0.0;

    for(int i=0;i<5;i++)
    {
        printf("\n Enter marks for the student %d is : ", i+1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    per = total/5;
    printf("\n Total is : %d", total);
    printf("\n Percentage is : %f", per);

    getch();
}