#include<stdio.h>
#include<conio.h>

void main()
{
    char str[] = "INDIA";
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)    
        {
            printf("%c", str[j]);
        }

        printf("\n");
    }

    getch();
    
}