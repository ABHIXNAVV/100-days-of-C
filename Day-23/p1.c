/*Find the sum:

2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms*/
#include <stdio.h>

int main()
{
    int n, i = 1;
    float sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    while (i <= n)
    {
        sum = sum + (float)(2 * i) / (4 * i - 1);
        i++;
    }

    printf("Sum = %.2f\n", sum);

    return 0;
}
// completed
