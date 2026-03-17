#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,num;
    char c ='A', temp;

    printf("enter num : ");
    scanf("%d",&num);

    for(i=0;i<=num;i++)
    {
        temp = c;

        for(j=0;j<=i;j++)
        {
            printf("%c", temp);
            temp;
        }

        c++;
        printf("\n");

    }

    getch();
}