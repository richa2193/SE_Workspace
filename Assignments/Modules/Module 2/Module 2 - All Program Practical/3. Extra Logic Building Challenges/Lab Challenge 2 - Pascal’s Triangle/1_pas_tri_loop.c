#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    int i, j;
    int triangle[20][20];

    // take number of rows from user 
    printf("\n Enter Number of Rows : ");
    scanf("%d", &n);

    // loop for each row 
    for(i = 0; i < n; i++)
    {
        // print spaces to center the triangle 
        for(j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }

        // print value in the row 
        for(j = 0; j <= i; j++)
        {
            // first and last value of each row is 1 
            if(j == 0 || j == i)
            {
                triangle[i][j] = 1;
            }
            else
            {
                // middle value are sum of two above values 
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j]; 
            }

            // print value with space 
            printf("%d ", triangle[i][j]);
        }

        // new line after each row 
        printf("\n");
    }

    return 0;

}