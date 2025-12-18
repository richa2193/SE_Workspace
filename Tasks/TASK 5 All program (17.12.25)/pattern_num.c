#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,num;
    int count=1;

    printf("Enter Number of rows: ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",count);
            count++;
        }

        printf("\n");
    }

    getch();
}