#include<stdio.h>
#include<conio.h>

// recursive function to find nth fibonaci number 
int fib(int n)
{
    if(n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);

}

// Iterative function to find nth fibonaci number 
int fibo(int n)
{
    int a = 0, b = 1, c, i;
    if(n == 0) return 0;
    if(n == 1) return 1;

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
    int n,i;

    printf("\n Enter the number of terms : ");
    scanf("%d",&n);

    // fibonaci series using recursion 
    printf("\n Fibonaci Series (Recursive) : ");
    for(i=0; i<n; i++)
    {
        printf("\n%d", fib(i));
    }

    // nth fibonaci number 
    printf("\n\n Nth Fibonacci using Recursive Method : %d ", fib(n-1));
    printf("\n Nth Fibonacci using Iterative Method : %d", fibo(n-1));

    return 0;

}