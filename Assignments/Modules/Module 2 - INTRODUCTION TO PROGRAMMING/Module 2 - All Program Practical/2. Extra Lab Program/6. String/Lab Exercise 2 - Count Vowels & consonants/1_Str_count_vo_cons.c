#include<stdio.h>
#include<conio.h>

int main()
{
    char str[100];
    int vowels = 0, consonants = 0, i;

    // ask user to input string 
    printf("\n Enter a String : ");
    //Read the string (using sapces)
    gets(str);

    // loop through each character of the string 
    for(i = 0; str[i] != '\0'; i++)
    {
        // step -1
        // check if the character is and alphabate (A - Z or a - z)
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            // step - 2
            // check if the alphabate is a vowel.

            if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || 
                str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')

            {
                // if vowels found, increase vowel count 
                vowels++;
            }

            else
            {
                // if alphabate but not vowel, it is a consonants 
                consonants++;
            }
        }

        // if character is space, number , or symbol -> ignore .
    }

    // printf total number of vowels 
    printf("\n Vowels = %d", vowels);

    // print total number of consonants 
    printf("\n Consonants = %d", consonants);

    return 0;

}