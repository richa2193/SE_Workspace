#include <stdio.h>
#include<conio.h>

int main()
{
    int arr1[5], i;
    int arr2[3][3], j, sum = 0;

    // ----- One-Dimensional Array -----
    printf("Enter 5 integers for 1D array:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("\nElements of 1D array:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr1[i]);
    }

    // ----- Two-Dimensional Array -----
    printf("\n\nEnter elements for 3x3 matrix:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &arr2[i][j]);
            sum += arr2[i][j];
        }
    }

    printf("\n3x3 Matrix:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of all elements in matrix = %d", sum);

    return 0;
}
