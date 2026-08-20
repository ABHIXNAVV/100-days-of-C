// Binary Representation of a Number
#include <stdio.h>

int main()
{
    int n, power = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("Binary = 0\n");
        return 0;
    }

    while (power <= n / 2)
    {
        power = power * 2;
    }

    printf("Binary = ");

    while (power > 0)
    {
        if (n >= power)
        {
            printf("1");
            n = n - power;
        }
        else
        {
            printf("0");
        }

        power = power / 2;
    }

    printf("\n");

    return 0;
}