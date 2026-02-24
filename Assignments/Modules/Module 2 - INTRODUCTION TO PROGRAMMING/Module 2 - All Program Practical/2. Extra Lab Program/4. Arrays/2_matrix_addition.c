#include<stdio.h>
#include<conio.h>

void main()
{
    int choice,i,j,k;

    printf("\n Choose Matrix Size : ");
    printf("\n 1. 2x2 Matrix ");
    printf("\n 2. 3x3 Matrix ");
    printf("\n Enter Your Choice : ");
    scanf("%d",&choice);

    if(choice == 1)
    { 
        int matA[2][2], matB[2][2], sum[2][2];

        //input 2x2 matrix 
        printf("\n Enter Elements of 2x2 Matrix A : ");
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                scanf("%d", &matA[i][j]);
            }
        }

        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                scanf("%d", &matB[i][j]);
            }
        }

        //Adiition 
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                sum[i][j] = matA[i][j] + matB[i][j];
            }
        }

        //Display result 
        printf("\n Sum of 2x2 Matrix : ");
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                printf("%d", sum[i][j]);
            }
            printf("\n");
        }
    }

    else if(choice == 2)
    {
        int matA[3][3], matB[3][3], sum[3][3], prod[3][3];

        // input 3x3 MAtrix 
        printf("\n Enter Elements of 3x3 Matrix A : ");
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                scanf("%d", &matA[i][j]);
            }
        }

        printf("\n Enter Elements of 3x3 Matrix B : ");
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                scanf("%d", &matB[i][j]);
            }
        }

        // Addition 
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                sum[i][j] = matA[i][j] + matB[i][j]; 
            }
        }

        //Multiplication 
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                prod[i][j] = 0;
                {
                    for(k=0;k<3;k++)
                    {
                        prod[i][j] += matA[i][k] * matB[k][j];
                    }
                }
            }
        }

        // Display result 
        printf("\n Sum of 3x3 MAtrices : ");
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("%d ", sum[i][j]);
            }
            printf("\n");
        }

        printf("\n Product pof 3x3 Matrices : ");
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("%d ", prod[i][j]);
            }
            printf("\n ");
        }
    }

    else
    {
        printf("\n Invalid choice ! please choose valid method. ");
    }

    getch();
    
}