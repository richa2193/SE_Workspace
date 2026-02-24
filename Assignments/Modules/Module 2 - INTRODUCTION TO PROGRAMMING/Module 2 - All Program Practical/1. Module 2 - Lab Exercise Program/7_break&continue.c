#include<stdio.h>
#include<conio.h>

void main()
{
    int i;

    //break statement
    printf("\n --- Using break statement --- ");
    for(i=1;i<=10;i++)
    {
        if(i == 5)
        {
            break;
        }
        printf("\n %d",i);
    }

    //continue statement 
    printf("\n --- Using Continue statement ---");
    for(i=1;i<=5;i++)
    {
        if(i==3)
        {
            continue;
        }
        printf("\n %d", i); 
    }

    getch();
}