#include<stdio.h>
#include<conio.h>

// recursive function to calculate value at row n and position k 
int pascal(int n, int k)
{
    // base condition 
    if(k == 0 || k == n)
        return 1;

    // recursive call 
    return pascal(n - 1, k - 1) + pascal(n - 1, k);
}

int main()
{
    int n, i, j;

    // take input 
    printf("\n Enter Number of Rows : ");
    scanf("%d", &n);

    // generate pascal triangle 
    for(i = 0; i < n; i++)
    {
        // print spaces for triangle shape 
        for(j = 0; j < n - i; j++)
        {
            printf(" ");
        }

        // print values
        for(j = 0; j <= i; j++)
        {
            printf("%d", pascal(i, j));
        }

        printf("\n");
    }

    return 0;
}