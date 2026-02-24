#include<stdio.h>
#include<conio.h>

int main()
{
    char str[200];  // to store the sentence 
    int i = 0;

    int currentlength = 0; // length of the current word 
    int maxlength = 0;     // lenght of the longest word 

    int endindex = 0; // ending index of longest word 

    // take sentence input 
    printf("\n Enter a Sentence : ");
    gets(str);

    // loop through each character 
    for(i = 0; str[i] != '\0'; i++)
    {
        // if character is not space, it is a part of a word 
        if(str[i] != ' ')
        {
            currentlength++; // increase current word length 
        }

        else
        {
            // space found -> word ended 

            // check if this word is the longest so far 
            if(currentlength > maxlength)
            {
                maxlength = currentlength;
                endindex = i - 1; // store the position of the longest word 
            }

            // rest for next word 
            currentlength = 0;
        }
    }

    // check last word (because sentence may not end with sapce)
    if(currentlength > maxlength)
    {
        maxlength = currentlength;
        endindex  = i - 1;
    } 

    // print the longest word 
    printf("Longest Word : ");

    // start index =  endindex - maxlength + 1
    for(i = endindex - maxlength + 1; i <= endindex; i++)
    {
        printf("%c", str[i]);
    }

    printf("\n Length : %d", maxlength);

    return 0;

}