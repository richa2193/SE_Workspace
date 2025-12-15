#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<stdbool.h>

void main()
{
   int table_no=0,choice,bill=0;
   printf("Enter Table No : ");
   scanf("%d",&table_no);
   
   while(true)
   {
        printf("\n Enter 1 For Pizza- Rs.100 \n Enter 2 For Burger- Rs. 70 \n Enter 3 for Coffee- Rs.120 \n Enter 0 For Exit \n Enter Your Choice : ");
        scanf("%d",&choice);
        
        switch(choice)
        {
           
            
            case 1:
            printf("\n You ordered pizza");

            bill+=100;
            //printf("Total : %d ",bill);
            break;
            
            case 2:
            printf("\n You ordered burger");
            bill+=70;
            //printf("Total : %d ",bill);
            break;
            
            case 3:
            printf("\n You ordered coffee \n ");
            bill+=120;
           // printf("Total : %d ",bill);
            break;
            
            case 0:exit(0);
           
            
            default:printf("\n Item Not available");
            break;
        }
        printf("\n Total Bill is  : %d \n ",bill);
   }
   
   

    getch();
}
