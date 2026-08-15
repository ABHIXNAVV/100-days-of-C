//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
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