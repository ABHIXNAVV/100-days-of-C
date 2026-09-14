// Product of Even Numbers from 1 to n
#include <stdio.h>

int main()
{
    int n, i = 2;
    long long product = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    while (i <= n)
    {
        product = product * i;
        i = i + 2;
    }

    printf("Product = %lld\n", product);

    return 0;
}