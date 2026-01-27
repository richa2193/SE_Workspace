#include<stdio.h>
#include<conio.h>

// using if-else or switch statement for the decision making process. 

void main()
{
    int marks;

    printf("\n Enter the marks of student : ");
    scanf("%d", &marks);

    if(marks>90)
    {
        printf("\n Grade A ");
    }
    else if(marks>75 && marks<=90)
    {
        printf("\n Grade B ");
    }
    else if(marks>50 && marks<=75)
    {
        printf("\n Grade C ");
    }
    else if(marks<=50)
    {
        printf("\n Grade D ");
    }
    else
    {
        printf("\n You are Fail "); 
    }

    getch();

}

// using switch statement 

// #include <stdio.h>
// #include <conio.h>

// void main()
// {
//     int marks;

//     printf("Enter Student Marks: ");
//     scanf("%d", &marks);

//     switch (marks / 10)
//     {
//         case 10:   // 100
//         case 9:    // 90–99
//             printf("Grade A");
//             break;

//         case 8:    // 80–89
//         case 7:    // 70–79
//             printf("Grade B");
//             break;

//         case 6:    // 60–69
//         case 5:    // 50–59
//             printf("Grade C");
//             break;

//         default:   // Below 50
//             printf("Grade D");
//     }

//     getch();
// }
