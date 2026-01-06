#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char name[10] = "";
    char surname[10] = "";

    printf("Enter Name : ");
    scanf("%s", &name);

    printf("Enter Surname : ");
    scanf("%s", &surname);

    printf("%s", strcat(name,surname));

    getch();
    
}