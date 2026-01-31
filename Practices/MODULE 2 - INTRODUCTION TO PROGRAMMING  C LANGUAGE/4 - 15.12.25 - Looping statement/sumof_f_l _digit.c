#include<stdio.h>
#include<conio.h>
void main()
{
    int num,ldigit=0,fdigit=0;
    
    printf("Enter Any Number : ");
    scanf("%d",&num);

    ldigit = num%10;

    while(num>0)
    {
        if(num>9)
        {
            num = num/10;
        }

        else
        {
            fdigit = num;
            num = num/10;

        }
    }

    int ans = fdigit+ldigit;
    printf("\n sum of first and last digit is : %d",ans);

    getch();
}