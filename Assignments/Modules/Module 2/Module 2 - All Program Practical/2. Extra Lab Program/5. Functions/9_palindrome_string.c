#include<stdio.h>
#include<conio.h>

// function to check plaindrome string 

// returns 1 if palindrome, otherwise return 0

int palindrome(char str[])
{
    int i, len;

    len = strlen(str);  // find length of string 

    // loop runs only till middle of string 
    for(i = 0; i < len / 2; i++)
    {
        // compare first and last characters 
        if(str[i] != str[len - i - 1])
            return 0;   //not palindrome 
    }

    return 1;   //palindrome 
}

int main()
{
    char str[100];

    printf("\n Enter a String : ");
    scanf("%s", str);   //read string (no space)

    // function call 
    if(palindrome(str))
    {
        printf("\n String is a Palindrome. ");
    }

    else
    {
        printf("\n String is not a Palindrome. ");
    }

    return 0;

}