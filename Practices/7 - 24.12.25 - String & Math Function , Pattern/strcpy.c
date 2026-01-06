#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char ch[10] = "richa";
    char ch2[10] = "";

    printf("\n Before Copy Value is : %s", ch);

    strcpy(ch2,ch);
    printf("\n After Copy Value is : %s", ch2);

    getch();

}