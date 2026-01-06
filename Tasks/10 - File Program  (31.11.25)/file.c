#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    FILE *fp;
    int choice;
    char fileName[20],name[20],email[20],password[20],loginemail[20],loginpassword[20];
    printf("Enter File Name: ");
    gets(fileName);

    printf("1 For Signup \n2 For Login \n");
    printf("Enter Choice:");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            fp = fopen(fileName,"w");
            printf("\n Enter Name:");
            scanf("%s",&name);
            printf("\n Enter Email:");
            scanf("%s",&email);
            printf("\n Enter Paasword:");
            scanf("%s",&password);

            fprintf(fp,"Name:%s\nEmail:%s\nPassword:%s\n",name,email,password);   
            fclose(fp);
            break;

        case 2:
            fp = fopen(fileName,"r");
            if(fp == NULL){
                printf("No User Found Please Signup First.....");
                fclose(fp);
                break;
            }
            else{
               
                printf("Enter Email: ");
                scanf("%s",&loginemail);
                printf("Enter Password: ");
                scanf("%s",&loginpassword);

                fscanf(fp, "Name:%s\n", name);
                fscanf(fp, "Email:%s\n", email);
                fscanf(fp, "Password:%s\n", password);

                fclose(fp);

                    if(strcmp(loginemail,email)==0){
                        if(strcmp(loginpassword,password)==0){
                            printf("Login Successfully");
                        }
                        else{
                            printf("Invalid Password");                            }
                        }
                    else{
                        printf("Invalid Email");
                    }
                }
    }

}