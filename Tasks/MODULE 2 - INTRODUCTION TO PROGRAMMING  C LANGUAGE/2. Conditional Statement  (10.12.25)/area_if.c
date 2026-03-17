#include<stdio.h>
#include<conio.h>
void main()
{
    int choice;
    float base, height, length, width, radius, area;

    printf("\n --- Area Calculation Menu --- \n 1. Area of Triangle \n 2. Area of Recentangle \n 3. Area of Circle \n Enter Your Choice : ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        //triangle area
        printf("\n Enter the base of the triangle : ");
        scanf("%f",&base);

        printf("\n Enter the height of the triangle : ");
        scanf("%f",&height);

        area = 0.5*base*height;
        printf("\n Area of Triangle is : %f",area);
    }

    else if(choice == 2)
    {
        //rectangle area
        printf("\n Enter length of the retangle : ");
        scanf("%f",&length);

        printf("\n Enter width of the retangle : ");
        scanf("%f",&width);

        area = length * width;
        printf("\n Area of Rectangle is : %f",area);
    }

    else if(choice == 3)
    {
        //circle area
        printf("\n Enter radius of the circle : ");
        scanf("%f",&length);

        area = 3.14 * radius * radius;
        printf("\n Area of Circle is : %f",area);
    }

    else
    {
        printf("\n Invalid choice! Please select 1, 2 or 3 ");
    }

    getch();
}