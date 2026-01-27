#include<stdio.h>
#include<conio.h>

// function to reverse a string using another aaray logic
void reverse(char str[])
{
    char rev[100];
    int i = 0, j;
    
    // find length of string manually 
    while(str[i] != '\0')
    {
        i++;
    }

    //copy characters in reverse order 
    for(j = 0; j < i; j++)
    {
        rev[j] = str[i - j - 1];
    }

    rev[j] = '\0';  // add string 

    //copy reversed string back to originals 
    j = 0;
    while(rev[j] != '\0')
    {
        str[j] = rev[j];
        j++;
    }

    str[j] = '\0';
}

int main()
{
    char str[100];

    printf("\n Enter a String : ");
    scanf("%s", str);

    // function call 
    reverse(str);

    printf("\n Reversed String : %s", str);

    return 0;

}