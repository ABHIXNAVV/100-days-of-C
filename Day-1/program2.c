//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main()
{
    int n1, n2;

    printf("ENTER TWO NUMBERS: ");
    scanf("%d %d", &n1, &n2);

    int sum = n1 + n2;
    printf("SUM OF TWO NUMBER %d\n", sum);

    int diff = n1 - n2;
    printf("DIFFERENCE OF TWO NUMBERS %d\n", diff);

    int pro = n1 * n2;
    printf("PRODUCT OF TWO NUMBERS %d\n", pro);

    int quo = n1 / n2;
    printf("THE QUOTIENT OF NUMBERS %d\n", quo);

    return 0;
}