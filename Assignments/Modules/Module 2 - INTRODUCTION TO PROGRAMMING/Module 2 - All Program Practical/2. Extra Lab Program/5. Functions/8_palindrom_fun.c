#include<stdio.h>
#include<conio.h>

// function to check palindrome 

// returns 1 if palindrome, otherwise returns 0
int palindrome(int num)
{
    int rev = 0; // to stored reverse number 
    int rem; // to store last digit 
    int temp; // to store original number 

    temp = num; // save original number before changing it 

    // loop tpo reverse the number 
    while(num != 0)
    {
        rem = num % 10;         // get last digit 
        rev = rev * 10 + rem;   // add digit to reversed number 
        num = num / 10;         // remove last digit 
    }

    // compare original number with reversed number 
    if(temp == rev) 
        return 1;       // number is palindrome 
    
    else
        return 0;       // number is not palindrome
}

int main()
{
    int n;

    printf("\n Enter a Number : ");
    scanf("%d", &n);

    // function call 
    if(palindrome(n))
    {
        printf("\n Number is a Palindrome. ");
    }

    else
    {
        printf("\n Number is not a Palindrome. ");
    }

    return 0;

}