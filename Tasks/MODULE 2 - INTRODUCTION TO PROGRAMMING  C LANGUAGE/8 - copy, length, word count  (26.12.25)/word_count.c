#include<stdio.h>
#include<conio.h>

void main()
{
    char str[50];
    int i, words = 1;

    printf("\n Enter a Sentences : ");
    scanf("%[^\n]", str);

    for(i=0;str[i] !='\0'; i++)
    {
        if(str[i] == ' ')
        {
            words++;
        }
    }

    printf("\n Number of words = %d", words);

    getch();

}