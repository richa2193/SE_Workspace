#include<stdio.h>
#include<conio.h>

int main()
{
    // array to store the input string 
    char str[100];

    int vowels = 0, consonants = 0, digit = 0, special = 0;

    int i;

    printf("\n Enter a String : ");
    gets(str);

    //loop through each character until end of string 
    for(i = 0; str[i] != '\0'; i++)
    {
        // checkl if character is an alphabate 
        if((str[i] >= 'A' && str[i] <= 'Z') || 
            (str[i] >= 'a' && str[i] <= 'z'))
        
        {
            // if alphabate, check weather it is a vowel.
            if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ||
            str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')

            {
                // alphabate + vowel 
                vowels++;
            }

            else
            {
                // alphabate but not vowel 
                consonants++;
            }
        }

        // check if character is a digit (0-9)
        else if(str[i] >= '0' && str[i] <= '9')
        {
            // digit found 
            digit++;
        }

        // if character is not alphabate and not digit 
        else
        {
            // special character
            special++;
        } 
    }

    // Display Result '
    printf("\n Vowels = %d", vowels);
    printf("\n Consonants = %d", consonants);  
    printf("\n Digits = %d", digit);
    printf("\n Special Characters = %d", special);

    return 0;
}