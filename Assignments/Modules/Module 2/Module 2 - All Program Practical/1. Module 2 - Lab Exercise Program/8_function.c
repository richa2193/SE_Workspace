#include<stdio.h>
#include<conio.h>

//function declaration 
int factorial(int n);

int main()
{
    int num, result;

    printf("Enter A Number : ");
    scanf("%d", &num);

    //function call
    result = factorial(num);

    printf("Factorial of %d is :  %d ", num,result);

    return 0;
}

// function definition
int factorial(int n)
{
    int i, fact=1;

    for(i=1;i<=n;i++)
    {
        fact = fact*i;
    }

    return fact;
}