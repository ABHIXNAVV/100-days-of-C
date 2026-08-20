// Print All Factors of a Number
#include <stdio.h>

int main()
{
    int n, i = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factors are: ");

    while (i <= n)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
        }

        i++;
    }

    printf("\n");

    return 0;
}
