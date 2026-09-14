
// Find the digit that occurs most frequently in an integer
#include <stdio.h>

int main()
{
    int n, digit, i;
    int frequency[10] = {0};
    int max = 0, result = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n == 0)
        frequency[0] = 1;

    while (n != 0)
    {
        digit = n % 10;
        frequency[digit]++;
        n = n / 10;
    }

    for (i = 0; i < 10; i++)
    {
        if (frequency[i] > max)
        {
            max = frequency[i];
            result = i;
        }
    }

    printf("Most frequent digit = %d\n", result);

    return 0;
}