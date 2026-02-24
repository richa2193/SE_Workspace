// Armstrong Number : a number is an armstrong number if sum of each digit raised to the
//                     power of total number of digits = original number 

// ex: 153 = cube of 1 + cube of five + cube of 3 = 153

#include<stdio.h>
#include<conio.h>

int main()
{
    int num, originalnum;
    int digit;
    int sum = 0;

    // take number input from user 
    printf("\n Enter a Number : ");
    scanf("%d", &num);

    // store original number for comparison 
    originalnum = num;

    // loops run untill all digit are processed.
    while(num != 0)
    {
        // get last digit of number 
        digit = num % 10;

        // cube the digit and add to sum 
        sum = sum + (digit * digit * digit);

        // remove last digit from number 
        num = num / 10;
    }

    // check armstrong condition 
    if(sum == originalnum)
    {
        printf("\n %d is an Armstrong Number ", originalnum);
    }

    else
    {
        printf("\n %d is not an Armstrong Number. ", originalnum);
    }

    return 0;
}