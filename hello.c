#include <stdio.h>

int GetPositiveInt();

int main(void)
{
    int n;
    n = GetPositiveInt();
    printf("thank you for %d\n", n);
}

int GetPositiveInt()
{
    int n = -1;
    do
    {
        printf("Enter a positive num: ");
        scanf("%d", &n);
    }
    while (n < 1);
    return n;
}
