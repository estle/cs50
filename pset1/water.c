#include <stdio.h>

int main(void)
{
    int waterminutes;
    printf("/waterminutes: ");
    scanf("%i", &waterminutes);
    printf("bottles: %i\n", waterminutes*12);
}