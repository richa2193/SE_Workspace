#include<stdio.h>
#include<conio.h>

int main() 
{
    int marks[5],choice,i,j,temp;
    
    for( i=0;i<5;i++)
    {
        printf("\n Enter Marks %d: ",i+1);
        scanf("%d",&marks[i]);
    }
    
    for( i=0;i<5;i++)
    {
        printf("\n Your Marks is:  %d ",marks[i]);
    }

    printf("\n Press 1 For Ascending Order \n Press 2 For Descending Order");
    scanf("%d",&choice);
    
    
    switch(choice)
    {
        case 1: 
        for(i=0;i<5;i++) 
        {
            for(j=0;j<5-i;j++)
            {
                if(marks[j] > marks[j+1]) // j+1<j 
                {
                     temp = marks[j];
                     marks[j] = marks[j + 1];
                     marks[j + 1] = temp;  

                }
            }
        }
        
           
    printf("\n Aescending Order: ");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", marks[i]);
    }
    
        break;
        
        case 2:     
         for(i=0;i<5;i++)
        {
            for(j=0;j<5-i;j++)
            {
                if(marks[j] < marks[j + 1])
                {
                     temp = marks[j];
                     marks[j] = marks[j + 1];
                     marks[j + 1] = temp;  
                }
            }
        }
        
           
    printf("\n Descending Order: ");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", marks[i]);
    }
        
        break;
        
        default: printf("not valid");
        break;
    }
    
    
    return 0;
}