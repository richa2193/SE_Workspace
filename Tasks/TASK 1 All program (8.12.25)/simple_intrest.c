#include<stdio.h>
#include<conio.h>
void main()
{
    
    float p,r,n;
    
    printf("\n Enter the principal amount p : ");
    scanf("%f", &p);

    printf("\n Enter the Rate of Interest r : ");
    scanf("%f", &r);

    printf("\n Enter the Number of Year n : ");
    scanf("%f", &n);

    float SI = p*r*n/100;
    printf("\n Simple Interest is : %f" ,SI);
    
    float total = SI + p;
    printf("\n The Total Amount is : %f", total);


    getch();
}