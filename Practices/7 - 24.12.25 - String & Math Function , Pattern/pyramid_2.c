#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,space,num;

    printf("Enter the Number : ");
    scanf("%d", &num);

    for(i=1;i<=num;i++)//row
    {
        for(space=0;space<=num-i;space++)
        {
            printf(" ");
        }

        for(j=1;j<=i;j++)//col
        {
            printf("%d", i);
        }

        printf("\n");

    }

    getch();
    
}