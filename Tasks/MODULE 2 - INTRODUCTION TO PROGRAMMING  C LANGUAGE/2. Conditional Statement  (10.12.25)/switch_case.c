#include<stdio.h>
#include<conio.h>
void main()
{
    int bill=0;
    int num,quan=1;

    printf("\n Press Your Number :  \n 1 for pizza \n 2 for burger \n 3 for coffee");
    scanf("%d", &num);

    switch(num)
    {
        case 1: printf("\n you ordered pizza.");
        finalqua = quan*100;
        bill+=finalquan;
        break;

        case 2: printf("\n you ordered burger.");
        bill+=70
        break;

        case 3: printf("\n you ordered coffee.");
        break;

        default: printf("Your order is not valid.");
        break;
    }

    printf("\n your bill is %d rs. ",bill);



    getch();
}