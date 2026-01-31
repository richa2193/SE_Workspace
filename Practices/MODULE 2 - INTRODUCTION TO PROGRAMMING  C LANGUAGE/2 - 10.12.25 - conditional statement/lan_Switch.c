#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    
    printf("\n Enter Your num: \n Enter 1 For English \n Enter 2 for Hindi \n Enter 3 for Gujarati ");
    scanf("%d",&num);
    
    switch(num)
    {
        case 1:printf("\n Your Language is English");
        break;
        
        case 2:printf("\n Your Language is Hindi");
        break;
        
        case 3:printf("\n Your Language is Gujarati");
        break;
        
        default:printf("\n Your Number is not valid");
        break;
    }
    
    getch();
}