/*
*   zouyaia
*   @gmail.com
*
*   Creates the mario tower with # in the console.
*/
#include <stdio.h>

int main(void)
{
    // input the height of mario tower
    int h;
    do
    {
        printf("Height: ");
        scanf("%i", &h);
    } while (h < 1 || h > 23);

    // compute the graphical tower
    for (int i=2; i < h + 2; i++)
    {
        for (int j = 0; j < h + 1; j++) {
            if (j < h + 1 - i)
                printf(" ");
            else
                printf("#");
        }
        printf("\n");
    }
}