#include<stdio.h>
#include<conio.h>

// recursive function to find fibonacci number 
int fibonacci(int n)
{
    if(n == 0)
        return 0;
        
    else if(n == 1)
        return 1;

    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n,i;

    printf("\n Enter Number of Terms : ");
    scanf("%d", &n);

    printf("\n Fibonacci Series : ");
    for(i = 0; i < n; i++)
    {
        printf("\n %d", fibonacci(i));
    }

    return 0;
}