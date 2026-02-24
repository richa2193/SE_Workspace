#include <stdio.h>

void main()
{
    int i;

    /* Using while loop */
    printf("\n Using while loop: ");
    i = 1;
    while (i <= 10)
    {
        printf("%d ", i);
        i++;
    }

    /* Using for loop */
    printf("\n\n Using for loop: \n");
    for (i = 1; i <= 10; i++)
    {
        printf("%d ", i);
    }

    /* Using do-while loop */
    printf("\n\n Using do-while loop: \n");
    i = 1;
    do
    {
        printf("%d ", i);
        i++;
    } while (i <= 10);

    getch();
    
}
