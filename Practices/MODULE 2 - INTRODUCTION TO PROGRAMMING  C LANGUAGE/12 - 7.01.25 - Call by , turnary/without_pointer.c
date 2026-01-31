#include<stdio.h>
#include<conio.h>

int swap(int x, int y)
{
    printf("\n Before swap in Function x=%d y=%d", x,y);
    int z;
    z=x;
    x=y;
    y=z;
    printf("\n After swap in Function x=%d y=%d", x,y);
}


int main()
{
    int x= 50, y=70;
    printf("\n Before swap in Main Function x=%d y=%d", x,y);
    swap(x,y);
    printf("\n After Swap in Main Function x=%d y=%d", x,y);

    return 0;

}