#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,num;

    printf("Enter Any number : ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",96+i);
        }

        printf("\n");
    }

    getch();
}