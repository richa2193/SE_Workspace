#include<stdio.h>
#include<conio.h>

// Iterative function 
int fibonacci(int n)
{
    int a = 0, b = 1, c,i;

    if(n == 0)
        return 0;

    for(i = 2; i <= n; i++)
    {
        c = a+b;
        a = b;
        b = c;
    }

    return b;
}

int main()
{
    int n;

    printf("\n Enter N : ");
    scanf("%d", &n);

    printf("\n Nth Fibonacci Iterative : %d", fibonacci(n));

    return 0;
    
}