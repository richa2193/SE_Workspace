#include<stdio.h>
#include<conio.h>
void main()
{
   int a,b;
  
    
    printf("Enter a:");
    scanf("%d",&a);
    
    printf("Enter b:");
    scanf("%d",&b);
    
    int add = a+b;
    int sub = a-b;
    int mul = a*b;
    int div = a/b;
    
    printf("\n addition is %d ",add);
    printf("\n substraction is %d ",sub);
    printf("\n multiplication is %d ",mul);
    printf("\n division is %d ",div);
    
    getch();
}