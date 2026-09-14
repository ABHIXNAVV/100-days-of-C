// Find the sum of all elements of an array
#include <stdio.h>

int main()
{
    int a[100], n, i;
    int sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    printf("Sum = %d\n", sum);

    return 0;
}
// completed
