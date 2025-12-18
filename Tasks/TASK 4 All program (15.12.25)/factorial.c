#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i;
    long fact = 1;

    printf("Enter a number : ");
    scanf("%d",&n);

    if(n<0)
    {
        printf("Error! factorial of a negative number doesn't exist. ");
    }

    else
    {
        for(i=1;i<=n;i++)
        {
            fact *=i; // fac = fac*i
        }

        printf("Factorial of %d is : %ld",n,fact);
    }

    getch();
}