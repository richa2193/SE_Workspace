#include<stdio.h>
#include<conio.h>

int main()
{
    float length, breadth, area;

    // user input 
    printf("\n Enter Length : ");
    scanf("%f", &length);

    printf("\n Enter Breadth : ");
    scanf("%f", &breadth);

    area = length + breadth;

    printf("\n Area of Rectangle : %f", area);

    return 0 ;

}
