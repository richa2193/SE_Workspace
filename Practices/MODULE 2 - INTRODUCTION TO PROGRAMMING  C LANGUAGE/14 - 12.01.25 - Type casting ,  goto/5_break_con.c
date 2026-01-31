#include<stdio.h>
#include<conio.h>

void main()
{
    for(int i=1;i<=10;i++)
    {
        if(i==3)
        {
            // break;
            continue;
        }
        printf("\n %d",i);
    }

    getch();
}