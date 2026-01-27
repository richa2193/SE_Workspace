#include<stdio.h>
#include<conio.h>

int main()
{
    char str[200];
    int i;
    int words = 0;

    // take sentence input from user 
    printf("\n Enter a Sentence : ");
    gets(str);

    // loop through each character of the string 
    for(i = 0; str[i] != '\0'; i++)
    {
        // check if current character is space 
        // AND next character is not space 
        // this means one word is completed 
        if(str[i] == ' ' && str[i+1] != ' ')
        {
            words++;
        }
    }

    // if string is not empty, words  = space + 1
    if(str[0] != '\0')
    {
        words = words + 1;
    }

    // print total number of words 
    printf("\n Number of Words : %d", words);

    return 0;
    
}