// Check whether a number is a perfect number.

// A perfect number is equal to the sum of its proper factors.
#include <stdio.h>

int main()
{
    int n, i = 1, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (i < n)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }

        i++;
    }

    if (sum == n)
    {
        printf("Perfect Number\n");
    }
    else
    {
        printf("Not a Perfect Number\n");
    }

    return 0;
}