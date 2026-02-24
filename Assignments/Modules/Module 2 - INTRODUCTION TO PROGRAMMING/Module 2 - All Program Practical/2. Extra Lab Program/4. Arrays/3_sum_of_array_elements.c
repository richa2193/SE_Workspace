#include<stdio.h>
#include<conio.h>

void main()
{
   int n, i;
   int arr[100];
   int sum = 0;
   float average;

   printf("\n Enter Number of Elements : ");
   scanf("%d", &n);

   printf("\n Enter %d Numbers : ", n);
   for(int i=0; i<n; i++)
   {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
   }

   average = (float)sum / n;

   printf("\n Sum of Array Elements : %d", sum);
   printf("\n Average of Array Elements : %f", average);

   getch();  
    
}