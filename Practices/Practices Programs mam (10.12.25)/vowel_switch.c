#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    
    printf("Enter Character : ");
    scanf("%c",&ch);
    
    //vowel cosonant
    
    switch(ch)
    {
        case 'A' : printf("It's a vowel");
        break;
        
        case 'E' : printf("It's a vowel");
        break;
        
        case 'I' : printf("It's a vowel");
        break;
        
        case 'O' : printf("It's a vowel");
        break;
        
        case 'U' : printf("It's a vowel");
        break;
        
        default:printf("it's a consonant");
        break;
        
    }
    
    getch();
}