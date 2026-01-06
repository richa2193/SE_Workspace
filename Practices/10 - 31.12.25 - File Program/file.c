#include<stdio.h>
#include<conio.h>

void main()
{
    FILE *myfile;
    int choice;
    char name[20],email[20],pass[20],filename[10];

    printf("Enter File Name: ");
    gets(filename); 
    // scanf("%s", &filename);

    myfile = fopen(filename,"w");

    printf("\n Press 1 for Signup \n Press 2 for Login \n Enter Your Choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1: 

        printf("\n Enter your name: ");
        scanf("%s", &name);

        printf("\n Enter your Email: ");
        scanf("%s", &email);

        printf("\n Enter your Password: ");
        scanf("%s", &pass);

        fprintf(myfile,"%d %s %f", name.email,pass);

        fclose(myfile);

        myfile = fopen(filename,"r");
        puts(" \n\n\tName\n\n\tEmail\n\n\tPassword");
        while(!feof(myfile))
        {
            fscanf(myfile,"%s %s %s", name,&email,&pass);
            printf("\t%s\t%s\t%s\n", name,email,Password);
        }

        fclose(myfile);

        break;

        case 2:
        
        printf("\n Enter Your Email: ");
        scanf("%s", &email);

        printf("\n ")
        
        break;

    }


    getch();

}