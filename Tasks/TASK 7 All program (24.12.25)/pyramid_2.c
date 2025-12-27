#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,space,num;

    printf("Enter the Number : ");
    scanf("%d", &num);

    for(i=1;i<=num;i++)//row
    {
        for(space=1;space<=num-i;space++)
        {
            printf(" ");
        }

        for(j=i;j>=1;j--)//col
        {
            printf("%d", j);
        }

        printf("\n");

    }

    getch();
    
}