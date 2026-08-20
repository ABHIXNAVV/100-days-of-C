// Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main()
{
    int n, temp, first, last, digits = 1, power = 1;
    int middle, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    last = n % 10;

    while (temp >= 10)
    {
        temp = temp / 10;
        digits++;
        power = power * 10;
    }

    first = temp;

    middle = (n % power) / 10;

    result = last * power + middle * 10 + first;

    printf("After swapping = %d\n", result);

    return 0;
}