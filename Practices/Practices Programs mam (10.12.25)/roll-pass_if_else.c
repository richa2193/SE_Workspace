#include<stdio.h>
#include<conio.h>
void main()
{
    int roll,pass;
    
    printf("Enter Your RollNumber : ");
    scanf("%d",&roll);
    printf("Enter Your Password : ");
    scanf("%d",&pass);
    
    if(roll==101 && pass==1234)
    {
       printf("\n Login Success"); 
    }
    else
    {
        printf("\n Login Fail");
    }
  
    getch();
}