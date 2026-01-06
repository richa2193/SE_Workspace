#include<stdio.h>
#include<conio.h>
void main()
{
    int marks;
    
    printf("Enter Your Marks: ");
    scanf("%d",&marks);

    if(marks>=70)
    {
        printf("\n A grade");
    }
    if(marks>=60)
    {
        printf("\n B grade");
    }
    if(marks>=50)
    {
         printf("\n C grade");
    }
    if(marks>=40)
    {
         printf("\n D grade");
    }
    else
    {
        printf("\n fail");
    }
   
    
    getch();
}

// it gives you the all output like if i enter 50 then they give c and d both grade. it doed not break. 