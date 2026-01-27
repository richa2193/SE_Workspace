#include<stdio.h>
#include<conio.h>

void main()
{
    int num1, num2, num3;

    printf("\n Enter The First Number : ");
    scanf("%d", &num1);

    printf("\n Enter The Second Number : ");
    scanf("%d", &num2);

    printf("\n Enter The Third Number : ");
    scanf("%d", &num3);

    // Largest number 
    if(num1 >= num2 && num1 >= num3)
    {
        printf("\n Largest Number is = %d", num1);
    }
    else if(num2 >= num1 && num2 >= num3)
    {
        printf("\n Largest Number is : %d", num2);
    }
    else
    {
        printf("\n Largest Number is = %d", num3);
    }

    //smallest number 
    if(num1 <= num2 && num1 <= num3)
    {
        printf("\n Smallest number is = %d", num1);
    }
    else if(num2 <= num1 && num2 <= num3)
    {
        printf("\n Smallest Number is = %d", num2);
    }
    else
    {
        printf("\n Smallest Number is : %d", num3);
    }

    getch();
    
}