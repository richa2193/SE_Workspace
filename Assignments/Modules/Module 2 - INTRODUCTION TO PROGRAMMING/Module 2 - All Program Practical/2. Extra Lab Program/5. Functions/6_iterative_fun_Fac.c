#include<stdio.h>
#include<conio.h>

// iterative function factorial 
long long factorial(int n)
{
    long long fact = 1;
    int i;

    for(i = 1; i <= n; i++)
    {
        fact =  fact * i;
    }

    return fact;
}

int main()
{
    int n;

    printf("\n Enter a Number : ");
    scanf("%d", &n);

    printf("\n Factorial (Iterative) = %lld", factorial(n));

    return 0;

}