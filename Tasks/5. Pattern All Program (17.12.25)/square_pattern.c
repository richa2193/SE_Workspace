#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,num;

    printf("Enter Number of rows: ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i*i);
        }

        printf("\n");
    }

    getch();
}