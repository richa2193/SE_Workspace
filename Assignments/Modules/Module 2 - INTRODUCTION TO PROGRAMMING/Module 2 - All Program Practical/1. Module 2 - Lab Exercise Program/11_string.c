#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char s1[50];
    char s2[50];

    printf("\n Enter First String : ");
    scanf("%s", s1);

    printf("\n Enter Second String : ");
    scanf("%s", s2);

    //continate the two string 
    strcat(s1,s2);

    printf("\n The contienated string is :  %s", s1);

    printf("\n The length of the contenated string is : %lu", strlen(s1));

    getch();
}