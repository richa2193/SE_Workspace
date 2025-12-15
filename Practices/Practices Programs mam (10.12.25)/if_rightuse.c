#include<stdio.h>
#include<conio.h>
void main()
{
    int roll,pass;
    
    printf("Enter Your RollNumber: ");
    scanf("%d",&roll);
    printf("Enter Your Password: ");
    scanf("%d",&pass);
    
    if(roll==101)
    {
       printf("\n Rollnumber is right"); 
    }
    if(pass==1234)
    {
       printf("\n Password is right"); 
    }
    
    getch();
}

// if you enter the both right roll and pass then they show both is right.
// if you enter anyone wrong then it will end and does not show anything.