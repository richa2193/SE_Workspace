#include<stdio.h>
#include<conio.h>
void main()
{
    int num,i;

    printf("Enter Any Number for table : ");
    scanf("%d",&num);

    for(i=1;i<=10;i++)
    {
        int ans = num*i;
        printf("%d * %d = %d \n ", num, i,ans);
    }

    getch();
}