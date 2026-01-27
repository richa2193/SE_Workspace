#include<stdio.h>
#include<conio.h>

void main()
{
    int a[10];
    int i,j,temp;
    int max,min;

    //input 10 elements
    printf("\n Enter 10 Integers : ");
    for(i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
    }

    //initialize the max and min
    max = a[0];
    min = a[0]; 
    for(i=1; i<10; i++)
    {
        if(a[i] > max)
        max = a[i];

        if(a[i] < min)
        min = a[i];
    }

    printf("\n Maximun value : %d",max);
    printf("\n Minimum value : %d",min);

    //sort array in ascending order 
    for(i=0;i<9;i++)
    {
        for(j=0;j<9-i;j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    //display sorted array 
    printf("\n Sorted Array in Asending Order : ");
    for(i=0;i<10;i++)
    {
        printf("%d  ", a[i]);
    }

    getch();

}