#include<stdio.h>
#include<conio.h>
int main()
{
     FILE *myfile;
     int i,number;
     float balance;
     char ch,name[30],filename[10];
     
     printf("Enter the file name:-"); 
     gets(filename);
     //scanf("%s",&filename);
     
     myfile = fopen(filename,"w");
     
     printf("\n Enter Data: ");
     for(i=0;i<3;i++)
     {
        printf("\n Enter Your Name: "); 
        scanf("%s",&name);
        
        printf("\n Enter Your Accno: "); 
        scanf("%d",&number);
        
        printf("\n Enter Your Balance: "); 
        scanf("%f",&balance);
        
        fprintf(myfile,"%d %s %f",number,name,balance);
     }
     fclose(myfile);
     
    myfile=fopen(filename,"r");
     puts(" \n\n\tNumber\t\tName\t\tBalance");
     while(!feof(myfile))
     {
          fscanf(myfile,"%d  %s  %f",&number,name,&balance);
          printf("\t%4d\t\t%10s\t\t%6.2f\n",number,name,balance);
         }
     fclose(myfile);
    
    
    return 0;
}