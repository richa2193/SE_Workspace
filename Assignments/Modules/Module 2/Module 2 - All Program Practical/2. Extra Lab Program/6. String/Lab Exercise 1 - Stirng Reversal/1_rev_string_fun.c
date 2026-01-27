#include<stdio.h>
#include<conio.h>

// function to reverse a string 

void reverse(char str[])
{
    int i = 0, j;
    char temp;

    // find length of string manually 
    while(str[i] != '\0')
    {
        i++;
    }

    j = i-1;    // j points to last characters 

    for(i = 0; i < j; i++, j--)
    {
        temp = str[i];      //store first character 
        str[i] = str[j];    //replace with last character
        str[j] = temp;      // replace last with first  
    }
}

int main()
{
    char str[100];

    printf("\n Enter a String : ");
    scanf("%s", str);   //input string 

    reverse(str);   //function call 

    printf("\n Reverse String is : %s", str);

    return 0;

}