// Check Armstrong Number
#include <stdio.h>
#include <math.h>

int main()
{
    int n, original, temp;
    int digits = 0;
    int digit;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;
    temp = n;

    if (n == 0)
    {
        digits = 1;
    }
    else
    {
        while (temp != 0)
        {
            digits++;
            temp = temp / 10;
        }
    }

    temp = n;

    while (temp != 0)
    {
        digit = temp % 10;
        sum = sum + (int)pow(digit, digits);
        temp = temp / 10;
    }

    if (sum == original)
    {
        printf("Armstrong Number\n");
    }
    else
    {
        printf("Not an Armstrong Number\n");
    }

    return 0;
}