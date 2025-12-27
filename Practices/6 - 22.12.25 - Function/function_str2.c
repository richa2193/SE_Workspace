#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char ch[10] = "mango";
    char ch2[10] = "";

    do
    {
        printf("\n what is your favourite fruit ? ");
        scanf("%s", &ch2);
    }

    while(strcmp(ch2,ch)!=0);

    printf("\n answetr is correct. ");

    getch();

}