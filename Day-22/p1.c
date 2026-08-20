// Check whether a number is a strong number.
#include <stdio.h>

int main()
{
    int n, temp, digit;
    int factorial, i;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (temp != 0)
    {
        digit = temp % 10;

        factorial = 1;
        i = 1;

        while (i <= digit)
        {
            factorial = factorial * i;
            i++;
        }

        sum = sum + factorial;
        temp = temp / 10;
    }

    if (sum == n)
    {
        printf("Strong Number\n");
    }
    else
    {
        printf("Not a Strong Number\n");
    }

    return 0;
}