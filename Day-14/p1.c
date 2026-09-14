// Sum of First n Odd Numbers
#include <stdio.h>

int main()
{
    int n, i = 1;
    int sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    while (i <= n)
    {
        sum = sum + (2 * i - 1);
        i++;
    }

    printf("Sum = %d\n", sum);

    return 0;
}

// completed
