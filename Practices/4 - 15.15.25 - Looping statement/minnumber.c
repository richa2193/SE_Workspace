#include<stdio.h>
#include<conio.h>
void main()
{
    int num,min=9;

    printf("Enter Any Number : ");
    scanf("%d",&num);

    while(num>0)
    {
        int rem = num % 10;

        if(rem<min)
        {
            min = rem;
        }
        num = num/10;
    }

    printf("Lowest digit is : %d",min);

    getch();
}