#include<stdio.h>
#include<conio.h>

// recursive factorial function 
long long factorial(int n)
{
    if(n == 0 || n == 1)
        return 1;

    else
        return n * factorial(n-1);
}

int main()
{
    int n;

    printf("\n Enter a Number : "); 
    scanf("%d", &n);

    printf("\n Factorial (Recursive) = %lld", factorial(n));

    return 0;
    
}