#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,num,space;

    printf("Enter The Number : ");
    scanf("%d",&num);

    //upper part
    for(i=1;i<=num;i++)
    {
        for(space=0;space<=num-i;space++)
        {
            printf(" ");
        }

        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        
        printf("\n");
    }


    //lower part
    for(i=num-1;i>=1;i--)
    {
        for(space=0;space<=num-i;space++)
        {
            printf(" ");
        }

        for(j=1;j<=i;j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    getch();
    
}