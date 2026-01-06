#include<stdio.h>
#include<conio.h>

void main()
{
     FILE *ptr;
     int i,number;
     float balance;
     char ch,name[30],filename[10];
     
     printf("Enter the file name:-"); 
     gets(filename);
     ptr=fopen(filename,"w");
     printf("\nEnter data\n");
     for(i=0;i<3;i++)
     {
          printf("\n\nEnter A/c No.:\t");  scanf("%d",&number);
          printf("\nEnter Name:\t");  scanf("%s",&name);
          printf("\nEnter Balance:\t");  scanf("%f",&balance);
          fprintf(ptr,"%d%s%f",number,name,balance);
     }

     fclose(ptr);
     ptr=fopen(filename,"r");
     puts(" \n\n\tNumber\n\n\t\tName\t\tBalance");
     while(!feof(ptr))
     {
          fscanf(ptr,"%d  %s  %f",&number,name,&balance);
          printf("\t %d \t\t %s \t\t %f\n",number,name,balance);
         }
     fclose(ptr);
     getch();
 
 }

 