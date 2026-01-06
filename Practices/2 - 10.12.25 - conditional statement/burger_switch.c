#include<stdio.h>
#include<conio.h>
void main()
{
    int bill =0,num,quan=1,finalqua;

    // Printf("\n --- Menu --- \n Enter 1 for pizza \n enter 2 for burger \n enter 3 for coffee \n ");
   
    printf("\n --- Menu --- \n Enter 1 for pizza \n enter 2 for burger \n enter 3 for coffee \n Enter any number : ");
    scanf("%d",&num);
    
    printf("\n enter quantity : ");
    scanf("%d",&quan);
    
    
    switch(num)
    {
        case 1:
        finalqua = quan*100;
        bill += finalqua;
        printf("\n You ordered %d pizza" , quan);
        printf("\n Your bill is : %d" , bill);
        break;
        
        case 2:
        finalqua = quan*70;
        bill+=finalqua;
        printf("\n You ordered %d burger" , quan);
        printf("\n Your bill is : %d" , bill);
        break;
        
        case 3:
        finalqua = quan*120;
        bill+=finalqua;
        printf("\n You ordered %d coffee" , quan);
        printf("\n Your bill is : %d" , bill);
        break;
      
        
        default:
        printf("Invalid choice. ");
        
        
    }
      
        // printf("Your bill is %d ",bill);
  
    getch();
}