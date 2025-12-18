#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,num;
    char c = 'A';

    printf("Enter Any Number : ");
    scanf("%d",&num);

    for(i=1;i<=num;i++) // for row
    {
        for(j=1;j<=i;j++) // for column
        {
            printf("%c",c);
        }

        c++;
        printf("\n");
    }

    getch();
}