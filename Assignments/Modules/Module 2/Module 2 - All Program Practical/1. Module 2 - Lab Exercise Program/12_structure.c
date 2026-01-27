#include<stdio.h>
#include<conio.h>

struct Student 
{
    char name[20];
    int roll;
    float marks;
};

void main()
{
    int i,n;

    printf("\n Enter Number of Student :" );
    scanf("%d",&n);

    struct Student s[n];

    for(i=0; i<n; i++)
    {
        printf("\n Enter Details of Student : %d",i+1);

        printf("\n Name : ");
        scanf("%s", s[i].name);

        printf("\n Roll Njumber : ");
        scanf("%d", &s[i].roll);

        printf("\n Marks : ");
        scanf("%f", &s[i].marks);
    }

    printf("\n Student Details : ");

    for(i = 0; i < n; i++)
    {
        printf("\n Name : %s\n Roll Number : %d \n Marks : %.2f",
                s[i].name, s[i].roll, s[i].marks);
    }

    getch();

}