#include<stdio.h>
#include<conio.h>
void main()
{
    int n,first=0,second=1,next,i;

    printf("Enter the number : ");
    scanf("%d",&n);

    printf("fibonacci Series : ");

    for(i=0;i<n;i++)
    {
        if(i<=1)
        {
            next = i;
        }

        else
        {
            next = first + second; 
            first = second;     
            second = next; 
        }

        printf(" %d ",next);
    }

    printf("\n");

    getch();
}