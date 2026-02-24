#include<stdio.h>
#include<conio.h>

// function to calculate factorial 
int factorial(int n)
{
    int fact = 1,i;

    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int num;

    printf("Enter a Number : ");
    scanf("%d", &num);

    printf("\n Factorial of %d = %d", num, factorial(num));

    return 0;
    
}