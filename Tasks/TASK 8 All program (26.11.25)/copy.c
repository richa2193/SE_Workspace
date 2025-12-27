#include<stdio.h>
#include<conio.h>

void main()
{
    char oldstr[50], newstr[50];
    int i = 0;

    printf("Enter the String : ");
    scanf("%s", oldstr);

    while(oldstr[i] != '\0')
    {
        newstr[i] = oldstr[i];
        i++;
    }

    newstr[i] = '\0';

    printf("New String = %s", newstr);

    getch();
    
}