#include<stdio.h>
#include<conio.h>

int main()
{
    int num;    // number from 1 to 1000
    int temp;   // temporary variable to store number 
    int digit;  // to store last digit 
    int sum;    // sum of cubes of digit

    // loop from 1 to 1000
    for(num = 1; num <= 1000; num++)
    {
        temp = num; // store original number 
        sum = 0;    // reset sum of each number 

        // extract digits of number
        while(temp != 0)
        {
            digit = temp % 10; // get last digit 
            sum = sum + (digit * digit * digit);    // cube and add
            temp = temp / 10;   // remove last digit 
        }

        // check Armstrong condition 
        if(sum == num)
        {
            printf("\n %d ", num);  //  print armstrong number 
        }
    }

    return 0;
    
}