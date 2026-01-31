#include<stdio.h>
#include<conio.h>
int main()
{
    int choice;
    char name[20],email[20],pass[20];
    FILE *fp;
    

    
    printf("\n Press 1 For Signup \n Press 2 For Login \n ");
    scanf("%d",&choice);
    
    switch(choice)
    {
        case 1:
            printf("\n Enter Your Name");
            scanf("%s",&name);
            
            printf("\n Enter Your Email");
            scanf("%s",&email);
            
            printf("\n Enter Your Password");
            scanf("%s",&pass);
            
            fp = fopen("details.txt","w");
            fprintf(fp,name);
            fprintf(fp,email);
            fprintf(fp,pass);
        break;
        
        case 2:
        
        break;
        
    }

    return 0;
}