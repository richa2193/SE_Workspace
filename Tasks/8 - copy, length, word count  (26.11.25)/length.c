#include<stdio.h>
#include<conio.h>

void main()
{
    char str[50];
    int len=0;

    printf("Enter Any Word : ");
    scanf("%s", str);

    while(str[len] != '\0')
    {
        len++;
    }

    printf("Length of the word = %d", len);

    getch();
    
}