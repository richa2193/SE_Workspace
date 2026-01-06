#include<stdio.h>
#include<conio.h>
void main()
{
    int choice;
    float num1, num2, result;

    printf("\n --- Calculator --- \n Enter 1 for Addition \n Enter 2 for substraction \n Enter 3 for Multiplication \n Enter 4 for Division \n Enter Your Choice : ");
    scanf("%d", &choice);

    if(choice >= 1 && choice <= 4)
    {
        printf("\n Enter first number : ");
        scanf("%f", &num1);

        printf("\n Enter second number : ");
        scanf("%f", &num2);

    }

    switch(choice)
    {
        case 1: printf("\n You Choose Addition ");
        result = num1 + num2;
        printf("\n Your result is : %f", result);
        break;

        case 2: printf("\n You Choose Substraction ");
        result = num1 - num2;
        printf("\n Your result is : %f", result);
        break;

        case 3: printf("\n You Choose Multiplication ");
        result = num1 * num2;
        printf("\n Your result is : %f", result);
        break; 

        case 4: printf("\n You Choose Addition ");

            if(num2 == 0)
                printf("\n Error. Division by zero is not allowed.");

            else
            {
                result = num1 / num2;
                printf("\n Your result is %f",result);
            }
    
        break;

        default:
            printf("\n Invalid choice! please select from 1 to 4. ");
    }


    getch();
}