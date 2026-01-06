#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fp;
    char c;
    fp = fopen("details.txt","r");
    
    while((c=getc(fp))!=EOF)
    {
         printf("%c",c);
    }
    return 0;
}