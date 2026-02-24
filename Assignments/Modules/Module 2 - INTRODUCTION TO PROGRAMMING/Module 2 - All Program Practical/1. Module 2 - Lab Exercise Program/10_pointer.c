#include<stdio.h>
#include<conio.h>

void main()
{
    char a = 'b';
    char *ptr;

    printf("%c \n" , a);
    ptr = &a;
    printf("%p \n" , ptr);

    *ptr='d'; 
    
    printf("%c \n",*ptr);

    getch();

}