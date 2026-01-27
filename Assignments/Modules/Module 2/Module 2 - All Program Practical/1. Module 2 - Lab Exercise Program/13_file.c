#include<stdio.h>
#include<conio.h>

void main()
{
    FILE *fp;
    char text[100];

    // create and write to file 
    fp = fopen("myfile.txt", "w");
    if(fp == null)
    {
        printf("File cannot be created.");
        return 1;
    }

    printf("\n Enter a string to write into file.");
    gets(text);

    fputs(text, fp);
    fclose(fp);

    // open file to read
    fp = fopen("file.txt", "r");
    if(fp == null)
    {
        printf("file cannot be opened.");
        return 1;
    }

    printf("\n File contents: ");

    while(fgets(text, sizeof(text), fp) != null)
    {
        printf("%s", text);
    }

    fclose(fp);

    getch();
    
}