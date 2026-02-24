#include<stdio.h>
#include<conio.h>

void main()
{
    int num, temp;
    int sum=0, reverse=0, digit;

    printf("\n Enter a Number : ");
    scanf("%d", &num);

    temp = num; //store original number

    while(temp != 0)
    {
        digit = temp % 10;  //get last digit
        sum = sum + digit;  // add digit to sum
        reverse = reverse * 10 + digit; // build reverse 
        temp = temp / 10; // remove last digit      
    }

    printf("\n Sum of Digit : %d",sum);
    printf("\n Reverse of Number : %d",reverse);

    getch();
}