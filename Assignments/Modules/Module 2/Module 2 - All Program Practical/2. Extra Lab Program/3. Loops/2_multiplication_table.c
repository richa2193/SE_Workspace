#include<stdio.h>
#include<conio.h>

void main()
{
    int num, range, i;

    printf("\n Enter the Number : ");
    scanf("%d", &num);

    printf("\n Enter the Range : ");
    scanf("%d", &range);

    printf("\n Multiplication table of %d up to %d : ", num,range);

    for(i=1; i<=range; i++)
    {
        printf("\n %d * %d = %d ",num,i, num*i);
    }

    getch();

}