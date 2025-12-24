    #include<stdio.h>
    #include<conio.h>
    #include<string.h>


    void main()
    {   
        char ch[10] = "richiii";
        char ch2[10] = "";
        int count=0;


        do
        {
            printf("what is the right password?"); 
            scanf("%s", ch2);
            count++;

            if(count>=3)
            {
                printf("\n you tried out of limit.");
                return;
            }

        }

        while(strcmp(ch2,ch)!=0);

        printf("\n Your password is right.");
        
        getch();
    }