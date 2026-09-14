// Check Prime Number
#include <stdio.h>

int main()
{
    int n, i = 2;
    int prime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        prime = 0;
    }
    else
    {
        while (i <= n / 2)
        {
            if (n % i == 0)
            {
                prime = 0;
                break;
            }

            i++;
        }
    }

    if (prime == 1)
    {
        printf("Prime Number\n");
    }
    else
    {
        printf("Not a Prime Number\n");
    }

    return 0;
}